#include <Deck.h>
#include <Hand.h>
#include <iostream>

Deck d;

Hand player;
Hand dealer;

int main() {
    bool running = true;
    d.createDeck();
    player.createHand();
    dealer.createHand();


    //while (running) {
    
    std::cout << std::flush;

    d.shuffle();
    std::cout << "Game: Blackjack" << std::endl << std::endl;
    std::cout << "Here are your cards:" << std::endl;
    player.hand[0].value = 9;
    player.hand[0].suit = 'S';

    player.hand[1].value = 10;
    player.hand[1].suit = 'S';

    player.displayHand();
    player.dealHand(d.deck, d.topCard);
    player.handValue();
    player.displayHand();


    std::cout << "Here are your cards:" << std::endl;
    

    //std::string hitOrStay;


    //}

}