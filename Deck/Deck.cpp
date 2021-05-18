#include "Deck.h"
#include <iostream>

Deck::Deck() {
    createDeck();
    shuffle();
}

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
    for (int i = 0; i < 7; i++) {
		srand(time(NULL));

	    for (int i = 0; i < 52; i++) {
		    int r = rand() % (52 - i) + i;

		    Card temp = deck[i];
		    deck[i] = deck[r];
		    deck[r] = temp;
	    }
	}
}