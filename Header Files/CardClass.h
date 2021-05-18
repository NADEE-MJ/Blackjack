#include <string>

class Card
{
    /*
    Card class simulates a playing card has two attributes, value and suit. Value can be 1 to 13 and
    suit can be D, H, S, or C. It also contains two methods to display the cards name and return the cards value.
    */
    private:
        //class variables
        int value;
        char suit;

        //empty constructor
        Card()
        {
            value = 0;
            suit = ' ';
        }
        
        //value constructor
        Card(int v, char s)
        {
            value = v;
            suit = s;
        }

    public:
        
        std::string displayCardName()
        {
            /*
            Public method for card class that displays the name of the card using the number value of the card,
            number cards are 2 to 10, ace is 1, jack is 11, queen is 12, and king is value 13.
            Distinction is made to clearly label the cards given out.
            */

           //initiallize output string
            std::string cardName = "[";

            //determines number/name of card and adds it to the output string
            if (value > 1 && value <= 10) {
                cardName += std::to_string(value);
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

        int cardValue()
        {
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
};