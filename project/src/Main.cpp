#include <C:\Programming\Github Projects\BlackjackGame\project\inc\Deck.h>
#include <C:\Programming\Github Projects\BlackjackGame\project\inc\Hand.h>
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
    std::cout << "Game: Blackjack!" << std::endl << std::endl;
    std::cout << "Here are your cards." << std::endl;

    player.dealHand(d.deck, d.topCard);
    player.handValue();
    player.displayHand();
    
    

    //std::string hitOrStay;


    //}

}