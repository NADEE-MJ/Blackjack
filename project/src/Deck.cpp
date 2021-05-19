#include <Deck.h>
#include <iostream>
#include <time.h>

Deck::Deck() {
    int topCard = 0;
    createDeck();
    shuffle();
}

void Deck::createDeck() {
    const int cardsInSuit = 13;

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i].value = i + 1;
        deck[i].suit = 'S';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 13].value = i + 1;
        deck[i + 13].suit = 'D';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 26].value = i + 1;
        deck[i + 26].suit = 'C';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 39].value = i + 1;
        deck[i + 39].suit = 'H';
    }
}

void Deck::shuffle() {
    const int perfectShuffle = 7;
    const int cardsInDeck = 52;
    Card temp;

    for (int i = 0; i < perfectShuffle; i++) {
		srand(time(NULL));

	    for (int i = 0; i < cardsInDeck; i++) {
		    int r = rand() % (cardsInDeck - i) + i;

		    temp = deck[i];
		    deck[i] = deck[r];
		    deck[r] = temp;
	    }
	}
}