#include <Hand.h>
#include <TextCard.h>
#include <iostream>

Hand::Hand() {
    sizeHand = 2;
    valueHand = 0;
}

void Hand::createHand() {
    const int largestHand = 11;

    for (int i = 0; i < largestHand; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void Hand::dealHand(Card deck[52], int *topCard) {
    const int standardHand = 2;
    sizeHand = standardHand;
    for (int i = 0; i < standardHand; i++) {
        hand[i] = deck[*topCard];
        *topCard += 1;
    }
}

void Hand::hit(Card deck[52], int *topCard) {
    hand[sizeHand] = deck[*topCard];
    *topCard += 1;
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
    int cardSize = 13;
    std::string temp;
    for (int i = 0; i < cardSize; i++) {
        temp = "   ";    
        for (int j = 0; j < sizeHand; j++) {
            if (hand[j].suit == 'D') {
                temp += textCard[hand[j].value - 1][i];
                temp += "   ";
            }
            else if (hand[j].suit == 'H') {
                temp += textCard[hand[j].value + 12][i];
                temp += "   ";
            }
            else if (hand[j].suit == 'S') {
                temp += textCard[hand[j].value + 25][i];
                temp += "   ";
            }
            else if (hand[j].suit == 'C') {
                temp += textCard[hand[j].value + 38][i];
                temp += "   ";
            }
        }
        std::cout << temp << std::endl;
    }

    for (int i= 0; i < sizeHand; i++) {
        hand[i].displayCardName();
        std::cout << "    ";
    }
    std::cout << std::endl;

    handValue();
    std::cout << "Hand value is " << valueHand << std::endl;
}