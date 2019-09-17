#include <iostream>
#include "Inventory.h"

using namespace std;

int main() {

	Inventory i1;

	char n1[8] = { 'O','r','a', 'n', 'g','e','s',0 };
	int q1 = 5;
	double p1 = 2.75;

	cout << "Creating the item: " << n1 << " with Quantity: " << q1 << " Price of " << p1 << endl;
	i1.new_product(n1, q1, p1);
	cout << "row number of " << n1 << " is:" << i1.row_no(n1) << endl;

	char n2[8] = { 'B','a','n','a','n','a', 's',0 };
	int q2 = 20;
	double p2 = 7.80;

	cout << "Creating the item: " << n2 << " with Quantity: " << q2 << " Price of " << p2 << endl;
	i1.new_product(n2, q2, p2);
	cout << "stock number of " << n2 << " is:" << i1.get_stock(n2) << endl;

	cout << "Ordering " << 5 << " " << n2 << i1.order(n2, 5) << endl;



	return 0;
}