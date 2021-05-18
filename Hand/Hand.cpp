#include "Hand.h"
#include "Deck.h"

void Hand::createHand() {
    for (int i = 0; i < 11; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void Hand::dealHand() {
    for (int i = 0; i < 2; i++) {
        hand[i] = deck[topCard];
        topCard++;
        sizeHand++;
    }
}

void Hand::hit(){
    hand[sizeHand] = deck[topCard];
        topCard++;
        sizeHand++;
}

void Hand::handValue(){
    int card_value = 0;
	for (int i = 0; i < leng; i++)
	{
		int cd = hand[i].card_value();
		if (cd <= 10)
		{
			card_value += cd;
		}
		else if (cd = 14)
		{
			if (current_valuedeal + 11 > 21 || card_value + 11 > 21)
			{
				card_value += 1;
			}
			else
			{
				card_value += 11;
			}
		}
	}
	return card_value;
}

void Hand::displayHand(){

}