#include <Deck.h>
#include <Hand.h>
#include <iostream>
#include <windows.h>

int main() {
    /*
    Blackjack game logic, first displays player cards and determines if they instantly win if the get 21 off the bat.
    Asks player if they would like to hit or stay with their current hand, then determines if they should hit again,
    if they busted, or if they win. Then does dealer logic. If dealer has less than 17 in his hand they have to hit.
    Finally compares dealers hand and players hand to see who wins and displays output. Then asks player if they
    would like to play again.
    */

    //initialize all objects and variables
    Deck d;

    Hand player;
    Hand dealer;

    bool playing;
    bool playerEndGame;
    bool dealerEndGame;
    bool dealerHit;

    char playAgain;
    char hitOrStay; 

    do {
        playerEndGame = false;
        dealerEndGame = false;

        d.shuffle();
        std::cout << "Game: Blackjack" << std::endl << std::endl;
        std::cout << "Here are your cards:" << std::endl;

        player.dealHand(d.deck, &d.topCard);
        player.displayHand();
        dealer.dealHand(d.deck, &d.topCard);
        
        
        if (!(player.valueHand == 21)) {
            do {
                std::cout << "Enter h to hit or anything else to stay: ";
                std::cin >> hitOrStay;
                if (hitOrStay == 'h' || hitOrStay == 'H') {
                    player.hit(d.deck, &d.topCard);
                    player.displayHand();
                }
                if (player.valueHand > 21) {
                    std::cout << "You Busted" << std::endl;
                    hitOrStay = 'n';
                    playerEndGame = true;
                }
                else if (player.valueHand == 21) {
                    std::cout << "You Win!" << std::endl;
                    hitOrStay = 'n';
                    playerEndGame = true;
                }
            } while (hitOrStay == 'h' || hitOrStay == 'H');
        }
        
        Sleep(2000);
        if (!playerEndGame) {
            do {
                std::cout << "Here are the dealer's cards: " << std::endl;
                dealer.displayHand();
                if (dealer.valueHand == 21) {
                    std::cout << "The dealer wins!" << std::endl;
                    dealerHit = false;
                    dealerEndGame = true;
                }
                else if (dealer.valueHand > 21) {
                    std::cout << "You Win!" << std::endl;
                    dealerHit = false;
                    dealerEndGame = true;
                }
                else if (dealer.valueHand >= 17) {
                    dealerHit = false;
                }
                else if (dealer.valueHand < 17) {
                    dealer.hit(d.deck, &d.topCard);
                    dealerHit = true;
                }
                Sleep(2000);
            } while (dealerHit);

            if (!dealerEndGame) {
                if (player.valueHand > dealer.valueHand) {
                    std::cout << "You Win!" << std::endl;
                }
                else if (player.valueHand == dealer.valueHand) {
                    std::cout << "You Push" << std::endl;
                }
                else if (player.valueHand < dealer.valueHand) {
                    std::cout << "You Lose!" << std::endl;
                }
            }
        }

        
        std::cout << "Do you want to play again? (type y for yes or anything else to quit): ";
        std::cin >> playAgain;

        if (playAgain == 'y' || playAgain == 'Y') {
            playing = true;
        }
        else {
            playing = false;
        }
    } while (playing);
}