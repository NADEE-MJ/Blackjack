#include <Deck.h>

void Deck::createDeck() {
    for (int i = 0; i < 13; i++) {
        deck[i].value = i + 2;
        deck[i].suit = 'S';
    }

    for (int i = 0; i < 13; i++) {
        deck[i + 13].value = i + 2;
        deck[i + 13].suit = 'D';
    }

    for (int i = 0; i < 13; i++) {
        deck[i + 26].value = i + 2;
        deck[i + 26].suit = 'C';
    }

    for (int i = 0; i < 13; i++) {
        deck[i + 39].value = i + 2;
        deck[i + 39].suit = 'H';
    }
}

void Deck::shuffle() {
    
}