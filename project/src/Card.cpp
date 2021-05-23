#include <TextCard.h>
#include <Card.h>
#include <iostream>

Card::Card() {
    //blank constructor - initializes card objecct variable
    value = 0;
    suit = ' ';
}

std::string Card::displayCardName() {
    /*
    Displays the name of the card using the value variable of the card, number
    cards are 2 to 10, ace is 1, jack is 11, queen is 12, and king is 13.
    Then uses the suit variable of the card to display full suit name.
    Distinction is made to clearly label the cards given out.
    */

    //initiallize output string
    std::string cardName = "[";

    //determines number value / name of card and adds it to the output string
    if (value > 1 && value <= 10) {
        cardName += std::to_string(value);
    }
    else {
        switch(value) {
            case 1:
                cardName += "Ace";
                break;
            case 11:
                cardName += "Jack";
                break;
            case 12:
                cardName += "Queen";
                break;
            case 13:
                cardName += "King";
                break;
        }
    }
    
    cardName += " of ";
    
    //determines card suit and adds it to the output string
    switch(suit) {
        case 'D':
            cardName += "Diamonds";
            break;
        case 'H':
            cardName += "Hearts";
            break;
        case 'S':
            cardName += "Spades";
            break;
        case 'C':
            cardName += "Clubs";
            break;
    }

    cardName += "]";

    return cardName;
}

void Card::displayCard() {
    /*
    Prints a text based version of the card based off suit and value, depending
    on the suit of card add the correct number to make card match up with
    index value of textCard array, then prints out all 13 lines of text for
    the card.
    */

   /*
   first splits up each case by suit then uses a for loop to print each line
   of the card from the textCard array based off the value of the card.
   */ 
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

int Card::cardValue() {
    /*
    Returns the value of the card object as an integer value, if card is
    ace -> 10 then the value will be returned as 1 - 10 respectively, 
    if the card is jack -> king then the value is 10.
    */
    if (value <= 10 ) {
        return value;
    }
    else {
        return 10;
    }
}