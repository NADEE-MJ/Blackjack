#include "Hand.h"
#include <iostream>

void Hand::createHand() {
    for (int i = 0; i < 11; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void Hand::dealHand(Card deck[52], int topCard) {
    for (int i = 0; i < 2; i++) {
        hand[i] = deck[topCard];
        topCard++;
        sizeHand++;
    }
}

void Hand::hit(Card deck[52], int topCard) {
    hand[sizeHand] = deck[topCard];
        topCard++;
        sizeHand++;
}

int Hand::handValue() {
    int handValue = 0;
	for (int i = 0; i < sizeHand; i++)
	{
		int cardValue = hand[i].cardValue();
		if (cardValue <= 10 && cardValue > 1)
		{
			handValue += cardValue;
		}
		else if (cardValue == 1)
		{
			if (handValue + 11 > 21)
			{
				handValue += 1;
			}
			else
			{
				handValue += 11;
			}
		}
	}
	return handValue;
}

void Hand::displayHand() {
    
    switch(suit) {
        case 'D':
            for (int i = 0; i < 13; i++) {
                std::cout << textCard[value - 1][i];
            }

        case 'H':
            for (int i = 0; i < 13; i++) {
                std::cout << textCard[value + 12][i];
            }

        case 'S':
            for (int i = 0; i < 13; i++) {
                std::cout << textCard[value + 25][i];
            }

        case 'C':
            for (int i = 0; i < 13; i++) {
                std::cout << textCard[value + 38][i];
            }
    }
}