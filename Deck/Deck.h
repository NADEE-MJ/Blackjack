#include <Card.h>

class Deck : public Card {
    private:
        Card deck[52];

    public:
        void createDeck();
        void shuffle();
};