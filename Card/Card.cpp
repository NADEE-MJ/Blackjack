#include <Card.h>
#include <TextCard.h>

//empty constructor
Card::Card() {
    value = 0;
    suit = ' ';
}
        
//value constructor
Card::Card(int v, char s) {
    value = v;
    suit = s;
}

string Card::displayCardName() {
    /*
    Public method for card class that displays the name of the card using the number value of the card,
    number cards are 2 to 10, ace is 1, jack is 11, queen is 12, and king is value 13.
    Distinction is made to clearly label the cards given out.
    */

    //initiallize output string
    string cardName = "[";

    //determines number/name of card and adds it to the output string
    if (value > 1 && value <= 10) {
        cardName += to_string(value);
    }
    else {
        switch(value) {
            case 1:
                cardName += "Ace";

            case 11:
                cardName += "Jack";

            case 12:
                cardName += "Queen";

            case 13:
                cardName += "King";
        }
    }
    
    cardName += " of ";
    
    //determines card suit and adds it to the output string
    switch(suit) {
        case 'D':
            cardName += "Diamonds";

        case 'H':
            cardName += "Hearts";

        case 'S':
            cardName += "Spades";

        case 'C':
            cardName += "Clubs";
    }

    cardName += "]";

    return cardName;
}

void Card::displayCard() {
    /*
    Prints a text based version of the card based off suit and value, depending on the suit of card add
    the correct number to make card match up with index value of textCard array, then prints out all 13 lines
    of text for the card.
    */
    switch(suit) {
        case 'D':
            for (int i = 0; i < 13; i++) {
                cout << textCard[value - 1][i];
            }

        case 'H':
            for (int i = 0; i < 13; i++) {
                cout << textCard[value + 12][i];
            }

        case 'S':
            for (int i = 0; i < 13; i++) {
                cout << textCard[value + 25][i];
            }

        case 'C':
            for (int i = 0; i < 13; i++) {
                cout << textCard[value + 38][i];
            }
    }
}

int Card::cardValue() {
    /*
    Returns the value of the card object as an integer value, if card is ace - 10 then the value will
    be returned as 1 - 10 respectively, if the card is jack - king then the value is 10.
    */
    if (value <= 10 ) {
        return value;
    }
    else {
        return 10;
    }
}