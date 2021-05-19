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
    
    //std::cout << std::flush;

    d.shuffle();
    std::cout << "Game: Blackjack" << std::endl << std::endl;
    std::cout << "Here are your cards:" << std::endl;

    player.dealHand(d.deck, &d.topCard);
    player.displayHand();
    
    char hitOrStay;
    do
    {
        std::cout << "Enter h to hit or anything else to stay: ";
        std::cin >> hitOrStay;
        if (hitOrStay == 'h' || hitOrStay == 'H') {
            player.hit(d.deck, &d.topCard);

            player.displayHand();
        }
    } while (hitOrStay == 'h' || hitOrStay == 'H');
    
    //}
}