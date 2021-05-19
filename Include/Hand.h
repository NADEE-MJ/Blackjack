#include <C:/Programming/Github Projects/BlackjackGame/Include/Card.h>

class Hand : public Card {
    public:
        Card hand[11];
        int sizeHand;
        int valueHand;

        void createHand();
        void dealHand(Card Deck[52], int topCard);
        void hit(Card Deck[52], int topCard);
        void handValue();
        void displayHand();

        friend class Deck;
};