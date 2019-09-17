#pragma once
class Inventory
{
private:
	static const int SIZE = 100;
	static const int N_SIZE = 15;	//assuming perfect user.
	int no_of_products = 0; // the total number of products in the inventory.
	char name_array[SIZE][N_SIZE]; // stores name of products
	double arr[SIZE][2]; // arr[quantity][price] In the first column quantity of the product and in the
	// second column the price per item of the product is
	// stored.

public:
	Inventory();
	int row_no(char* product_name);
	int get_stock(char* product_name);
	double order(char* product_name, int quantity);
	bool new_product(char* product_name, int quantity, double price);
	void discontinued_product(char* product_name);
};

