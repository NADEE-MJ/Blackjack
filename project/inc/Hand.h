#include <Card.h>

class Hand : public Card {
    /*
    Hand class is derived from card class, when initialized the hand object
    creates an empty hand with a maximum of 11 cards total and stores the
    current size of the hand and its value. The hand class has five methods:
    createHand() creates an empty hand of a const size, dealHand() deals a set
    amount of cards to the hand, hit() gives the hand one card, handValue()
    returns the value of the hand, and displayHand() horizontally displays the
    hand with text based cards.
    */
    public:
        //class variables
        Card hand[11];
        int sizeHand;
        int valueHand;

        //blank constructor
        Hand();

        //methods
        void createHand();
        void dealHand(Card Deck[52], int *topCard);
        void hit(Card Deck[52], int *topCard);
        int handValue();
        void displayHand();
};