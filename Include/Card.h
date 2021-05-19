#include <string>
#pragma once

class Card {
    /*
    Card class simulates a playing card has two attributes, value and suit. Value can be 1 to 13 and
    suit can be D, H, S, or C. It also contains three methods to display the cards name, 
    display a text based version of the card, and return the cards value.
    */

    public:
        //class variables
        int value;
        char suit;

        //constrctors
        Card();

        //methods
        std::string displayCardName();
        void displayCard();
        int cardValue();
};