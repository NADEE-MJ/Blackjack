#include <Deck.h>
#include <Hand.h>
#include <iostream>
#include <Windows.h>

Deck d;

Hand player;
Hand dealer;

int main() {
    bool running = true;
    d.createDeck();
    player.createHand();
    dealer.createHand();


    //while (running) {
    system("cls");


    d.shuffle();
    std::cout << "Game: Blackjack" << std::endl << std::endl;
    std::cout << "Here are your cards:" << std::endl;
    player.hand[0].value = 9;
    player.hand[0].suit = 'D';

    player.hand[1].value = 10;
    player.hand[1].suit = 'D';

    player.handValue();
    player.displayHand();
    player.dealHand(d.deck, d.topCard);
    player.handValue();
    player.displayHand();


    std::cout << "Here are your cards:" << std::endl;
    

    //std::string hitOrStay;


    //}

}