# BlackjackGame
This is a text based Blackjack game written in C++, compiled using cmake.

## Class Info
The game is split up into three classes.
1. Card - Card objects contain data about the cards value and suit
2. Deck - tracks the deck of cards, contains shuffle and initialization methods
3. Hand - tracks a hand of cards, can be delt cards from a deck object

Each class can be customized to fit the mold of any other game type like texas hold em or five card poker.

## Need to add/fix
1. calculation of score for aces is not correct
2. add a gui instead of the current tui
3. classes don't need to inherit anything, can remove inheritence and optomize methods in classes(use dictonaries instead of switch case)
