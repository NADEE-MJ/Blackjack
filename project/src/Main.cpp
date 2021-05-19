#include <Deck.h>
#include <Hand.h>
#include <iostream>

Deck d;

Hand player;
Hand dealer;

int main() {
    bool playing;
    bool playerWin;
    bool dealerWin;
    bool dealerHit;
    char playAgain;

    char hitOrStay; 

    d.createDeck();
    player.createHand();
    dealer.createHand();

    //std::cout << std::flush;

    do {
        playerWin = false;
        dealerWin = false;

        d.shuffle();
        std::cout << "Game: Blackjack" << std::endl << std::endl;
        std::cout << "Here are your cards:" << std::endl;

        player.dealHand(d.deck, &d.topCard);
        player.displayHand();
        dealer.dealHand(d.deck, &d.topCard);
        
        
        do {
            std::cout << "Enter h to hit or anything else to stay: ";
            std::cin >> hitOrStay;
            if (hitOrStay == 'h' || hitOrStay == 'H') {
                player.hit(d.deck, &d.topCard);
                player.displayHand();
            }
            if (player.valueHand > 21) {
                std::cout << "You Busted";
                hitOrStay = 'n';
            }
            else if (player.valueHand == 21) {
                std::cout << "You Win!";
                hitOrStay = 'n';
                playerWin = true;
            }
        } while (hitOrStay == 'h' || hitOrStay == 'H');

        
        if (!playerWin) {
            do {
                dealer.displayHand();
                if (dealer.valueHand == 21) {
                    std::cout << "The dealer wins!";
                    dealerHit = false;
                    dealerWin = true;
                }
                else if (dealer.valueHand >= 17) {
                    dealerHit = false;
                }
                else if (dealer.valueHand < 17) {
                    dealer.hit(d.deck, &d.topCard);
                    dealerHit = true;
                }
            } while (dealerHit);
            if (!dealerWin) {
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