#include <C:\Programming\Github Projects\BlackjackGame\project\inc\Card.h>
#pragma once   

class Hand : public Card {
    public:
        Card hand[11];
        int sizeHand;
        int valueHand;

        Hand();

        void createHand();
        void dealHand(Card Deck[52], int topCard);
        void hit(Card Deck[52], int topCard);
        void handValue();
        void displayHand();
};