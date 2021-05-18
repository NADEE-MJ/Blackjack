#include <Deck.h>
#include <TextCard.h>

class Hand : public Deck {
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
};