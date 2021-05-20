#include <Deck.h>
#include <iostream>
#include <time.h>


Deck::Deck() {
    //blank constructor - initializes the top card, creates and shuffles deck
    int topCard = 0;
    createDeck();
    shuffle();
}

void Deck::createDeck() {
    /*
    creates every card in a normal deck of playing cards, goes over each item
    in the deck array and gives it a value and suit for each distinct card
    in each suit in a normal deck
    */
    const int cardsInSuit = 13;

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i].value = i + 1;
        deck[i].suit = 'D';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 13].value = i + 1;
        deck[i + 13].suit = 'H';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 26].value = i + 1;
        deck[i + 26].suit = 'S';
    }

    for (int i = 0; i < cardsInSuit; i++) {
        deck[i + 39].value = i + 1;
        deck[i + 39].suit = 'C';
    }
}

void Deck::shuffle() {
    /*
    randomly shuffles the cards in the deck 7 times which is the perfect amount
    to get a perfectly random deck every time.
    */
    const int perfectShuffle = 7;
    const int cardsInDeck = 52;
    Card temp;

    //for loop shuffles 7 times
    for (int i = 0; i < perfectShuffle; i++) {
		srand(time(NULL));

	    for (int i = 0; i < cardsInDeck; i++) {
            /*
            for each card in the deck pick a random card and switch it with
            the card at the index that the for loop is on
            */
		    int r = rand() % (cardsInDeck - i) + i;

		    temp = deck[i];
		    deck[i] = deck[r];
		    deck[r] = temp;
	    }
	}
}