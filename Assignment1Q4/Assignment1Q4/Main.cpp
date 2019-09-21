#include <iostream>
#include "Card.h"
using namespace std;

int main() {
	
	Card c1;
	char suit1[7] = { 'H', 'e', 'a', 'r', 't', 's' , '\0'};
	c1.set_suit(suit1);
	c1.set_value(5);
	c1.display();

	Card c2;
	char suit2[7] = { 'S', 'p', 'a', 'd', 'e', 's', '\0' };
	c2.set_suit(suit2);
	c2.set_value(13);
	c2.display();

	c2.set_value(12);
	c2.display();

	c1.set_suit(suit2);
	c1.display();

	return 0;
}
