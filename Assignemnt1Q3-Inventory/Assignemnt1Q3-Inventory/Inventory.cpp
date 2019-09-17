#include <iostream>
#include "Inventory.h"
using namespace std;

	Inventory::Inventory()
	{
		for (int j = 0; j < 2; j++) {
			for (int i = 0; i < N_SIZE; i++) {
				arr[i][j] = 0;
			}
		}

		for (int j = 0; j < SIZE; j++) {
			name_array[j][0] = '/0';
		}
	}

	int Inventory::row_no(char* product_name) {

		//go through the matrix of NUMBER / NAME
		for (int num = 0; num < SIZE; num++) {
			for (int ch = 0; ch < N_SIZE; ch++) {
				if (product_name[ch] != name_array[num][ch]) {
					break; //stop looking at the name if a character is not the same.
				}
				else
				{
					return num;
				}
			}
		}
		return -1; //product does not exist
	}

	int Inventory::get_stock(char* product_name) {
		int row = row_no(product_name);
		return arr[row][1];
	}

	double Inventory::order(char* product_name, int quantity) {
		int stock = get_stock(product_name);
		if (quantity > stock && quantity < 0) {
			return 0;
		}
		else {
			int row = row_no(product_name);
			arr[row][0] = arr[row][0] - quantity;
			double price = quantity * arr[row][1];
			return price;
		}
	}

	bool Inventory::new_product(char* product_name, int quantity, double price) {

		int row;
		//LOOK FOR EMPTY ARRAY
		for (int num = 0; num < SIZE; num++) {
			if (name_array[num][0] == 0) {
				row = num;
				break; //stop looking at the name if a character is not the same.
			}
			return false; //no rows are empty
		}

		if (row != -1) {

			for (int i = 0; i < N_SIZE; i++)
			{
				name_array[row][i] = product_name[i];	//assign product name to product name row
			}

			arr[row][0] = quantity;
			arr[row][1] = price;

			no_of_products++;
			return true;
		}
		else {
			return false;
		}
	}

	void Inventory::discontinued_product(char* product_name) { //logically, it should return true or false, not void. In case this function fails. I.e product name DNE

		int row = row_no(product_name);
		if (row > -1) {
			name_array[row][0] = '\0';
			arr[row][0] = 0;
			arr[row][1] = 0;
			no_of_products--;
			return;
		}
		else {
			return;
		}
	}


