#include <Hand.h>
#include <TextCard.h>
#include <iostream>

Hand::Hand() {
    //blank constructor, initializes object variables and creates empty hand
    sizeHand = 0;
    valueHand = 0;
    createHand();
}

void Hand::createHand() {
    /*
    Initializes each card in the hand array with blank value and suit to be
    changed later based off the size of constant largestHand. In a game of 
    blackjack with one deck the largest possible hand is 11.
    */
    const int largestHand = 11;

    for (int i = 0; i < largestHand; i++) {
        hand[i].value = 0;
        hand[i].suit = ' ';
    }   
}

void Hand::dealHand(Card deck[52], int *topCard) {
    /*
    This deals a set amount of cards to the hand based of the constant 
    standardHand, this then sets the size of the hand to standardHand size
    so that the object can track how big the hand currently is. This works by
    interecting with a card array and drawing from the card in position topCard.
    The topCard is passed by reference so the method can update its value to the
    next card after drawing from the deck in that position.
    */
    const int standardHand = 2;
    sizeHand = standardHand;

    for (int i = 0; i < standardHand; i++) {
        hand[i] = deck[*topCard];
        *topCard += 1;
    }
}

void Hand::hit(Card deck[52], int *topCard) {
    /*
    This deals a the hand a single card, then adds 1 to the current sizeHand
    so that the object can track how big the hand currently is. This works by
    interecting with a card array and drawing from the card in position topCard.
    The topCard is passed by reference so the method can update its value to the
    next card after drawing from the deck in that position.
    */
    hand[sizeHand] = deck[*topCard];
    *topCard += 1;
    sizeHand++;
}

int Hand::handValue() {
    /*
    This method determines the total value of the hand based off the cardValue()
    method from the card class. If the card has value of 2-10 then that number
    gets added to the handValue variable. If the value is 1 then if the handValue
    plus 11 is greater than 21 then a 1 is added to handValue otherwise add 11 
    to the handValue.
    */
    int handValue = 0;
	for (int i = 0; i < sizeHand; i++) {
		int cardValue = hand[i].cardValue();
		if (cardValue >= 2) {
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
	return handValue;
}

void Hand::displayHand() {
    /*
    Horizontally display any amount of text based cards from the textCard array.
    First display each cards name and automatically account for the spacing
    between each card to properly line up the names. Then run a for loop to print
    each first line of each card in the hand array, then each second line of each
    card in the hand array, until each line of each card is printed. Lastly
    print the value of the whole hand by calling handValue function and update
    valueHand.
    */
    int textCardSize = 13;
    std::string temp;

    std::cout << std::endl;

    //display the name of each card in the hand properly spaced out
    for (int i= 0; i < sizeHand; i++) {
        temp = "";
        temp = hand[i].displayCardName();
        for (int j = temp.length(); j < 21; j++) {
            temp += " ";
        }
        std::cout << temp;
    }
    std::cout << std::endl;

    /*
    print out each first line of each card in hand array, then second, then
    third, etc. till all lines are printed. Adds each first line to a temp
    string then prints whole string at once. Then with the same with the 
    second and so on.
    */
    for (int i = 0; i < textCardSize; i++) {
        temp = "";    
        for (int j = 0; j < sizeHand; j++) {
            if (hand[j].suit == 'D') {
                temp += textCard[hand[j].value - 1][i];
                temp += "      ";
            }
            else if (hand[j].suit == 'H') {
                temp += textCard[hand[j].value + 12][i];
                temp += "      ";
            }
            else if (hand[j].suit == 'S') {
                temp += textCard[hand[j].value + 25][i];
                temp += "      ";
            }
            else if (hand[j].suit == 'C') {
                temp += textCard[hand[j].value + 38][i];
                temp += "      ";
            }
        }
        std::cout << temp << std::endl;
    }

    //calculate handValue then store in valueHand and print.
    valueHand = handValue();
    std::cout << "Hand value is " << valueHand << std::endl;
}