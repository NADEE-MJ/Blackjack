#include <C:/Programming/Github Projects/BlackjackGame/Include/Hand.h>
#include <C:/Programming/Github Projects/BlackjackGame/Include/TextCard.h>
#include <iostream>

void Hand::createHand() {
    const int largestHand = 11;

    for (int i = 0; i < largestHand; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void Hand::dealHand(Card deck[52], int topCard) {
    const int standardHand = 2;
    for (int i = 0; i < standardHand; i++) {
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

void Hand::handValue() {
    int handValue = 0;
	for (int i = 0; i < sizeHand; i++) {
		int cardValue = hand[i].cardValue();
		if (cardValue <= 10 && cardValue > 1) {
			handValue += cardValue;
		}
		else if (cardValue == 1) {
			if (handValue + 11 > 21) {
				handValue += 1;
			}
			else {
				handValue += 11;
			}
		}
	}
	valueHand = handValue;
}

void Hand::displayHand() {
    for (int i= 0; i < 13; i++) {    
        for (int j = 0; j < sizeHand; j++){
            switch(hand[j].suit) {
                case 'D':
                    std::cout << textCard[value - 1][i] << "   ";

                case 'H':
                    std::cout << textCard[value + 12][i] << "   ";

                case 'S':
                    std::cout << textCard[value + 25][i] << "   ";

                case 'C':
                    std::cout << textCard[value + 38][i] << "   ";
            }
            std::cout << std::endl;
        }
    }

    for (int i= 0; i < 3; i++) {
        hand[i].displayCardName();
        std::cout << "    ";
    }
    std::cout << std::endl;

    std::cout << "Hand value is " << valueHand << std::endl;
}