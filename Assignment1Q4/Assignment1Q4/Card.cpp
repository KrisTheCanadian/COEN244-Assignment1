#include "Card.h"
#include <iostream>
using namespace std;
void Card::set_suit(char* suit_change) {
	
	for (int i = 0; i < SIZE; i++) {
		suit[i] = suit_change[i];
	}

}

Card::Card() { //default constructor 

}

char* Card::get_suit() {
	return suit;
}

void Card::set_value(int value_change) {
	value = value_change;
}

int Card::get_value() {
	return value;
}

void Card::display() {
	
	if (value < 11 && value > 1) {
		cout << "[CARD] " << get_value() << "-" << get_suit() << endl;
	}
	else {
		string face;
		switch (value) {
			case 1: face = "Ace";
			case 11: face = "Jack";
			case 12: face = "Queen";
			case 13: face = "King";
			default: face = "ERROR";
		}
		
		cout << "[CARD] " << face << "-" << get_suit() << endl;
	}
	
}