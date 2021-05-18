#include "Card.h"
#include "TextCard.h"

class Hand : public Card {
    private:
        Card hand[11];
        int sizeHand;

    public:
        void createHand();
        void dealHand(Card Deck[52], int topCard);
        void hit(Card Deck[52], int topCard);
        int handValue();
        void displayHand();

        friend class Deck;
};