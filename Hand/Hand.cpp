#include <Hand.h>

void Hand::createHand() {
    for (int i = 0; i < 11; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void dealHand();
void shuffle();
void hit();
void handValue();
void displayHand();