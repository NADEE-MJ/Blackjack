#include "Card.h"
#include "TextCard.h"

class Hand : public Card {
    private:
        Card hand[11];
        int sizeHand;

    public:
        void createHand();
        void dealHand();
        void shuffle();
        void hit();
        void handValue();
        void displayHand();

        friend class Deck;
};