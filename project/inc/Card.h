#include <string>
#pragma once

class Card {
    /*
    Card class simulates a playing card that has two variables, value and suit.
    Value can be 1 to 13 for each card in a suit and suit can be D, H, S, or C. 
    It also contains three methods: displayCardName displays the card's name,
    displayCard() displays a text based version of the card, and cardValue()
    returns the cards value.
    */

    public:
        //class variables
        int value;
        char suit;

        //blank constrctor
        Card();

        //methods
        std::string displayCardName();
        void displayCard();
        int cardValue();
};