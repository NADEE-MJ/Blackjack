#include "Card.h"
#include "Hand.h"

class Deck : public Card {
    private:
        Card deck[52];
        int topCard = 0;

    public:
        Deck();

        void createDeck();
        void shuffle();
};