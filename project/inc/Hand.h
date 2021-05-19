#include <Card.h>

class Hand : public Card {
    public:
        Card hand[11];
        int sizeHand;
        int valueHand;

        Hand();

        void createHand();
        void dealHand(Card Deck[52], int *topCard);
        void hit(Card Deck[52], int *topCard);
        int handValue();
        void displayHand();
};