#include <Card.h>

class Deck : public Card {
    /*
    Deck class is derived from card class, when initialized the deck object
    creates a deck of 52 card objects and stores the position of the top card.
    The deck class has two methods, createDeck() initializes the deck with 
    every type of playing card and shuffle() shuffles the deck.
    */

    public:
        //class variables
        Card deck[52];
        int topCard;

        //blank constructor
        Deck();

        //methods
        void createDeck();
        void shuffle();
};