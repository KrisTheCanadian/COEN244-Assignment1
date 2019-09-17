#include <iostream>
using namespace std;

const int SIZE = 6;
void arr_to_ascii(char*);
void int_to_arr(int, char*);

int main()
{
		
		int input;


		cout << "Enter a 6 digit number" << endl;
		cin >> input;


		char arr[SIZE + 1] = {'a', 'b', 'c', 'd', 'e', 'f', 0};

		int_to_arr(input, arr);

		//DEBUGGING PURPOSES//
		cout << "[DEBUG] Input: " << input << endl;
		cout << "[DEBUG] Array: " << arr << endl;
		//END OF DEBUGGING//
		arr_to_ascii(arr);
		return 0;
}


void arr_to_ascii(char* input) {

	int num1 = 0;

	for (int i = 1; i < (SIZE + 1); i += 2) {

		num1 = static_cast<int>((*(input + i - 1) -48) * 10) + static_cast<int>(*(input + i) - 48); // -48 char -> int
		if (num1 < 65 || num1 > 90) {
			cout << '+';
		}
		else {
			cout << static_cast<char>(num1); //making use of that already implemented ascii table in c++ :)
			// -32 is to make it capital.
		}
	}
	cout << endl;
}

void int_to_arr(int num, char* arr) {

	int i = 5;

	while (num != '\0') { // 00 will not be written to arr but program will output the correct result anyways.

		arr[i] = static_cast<char>((num % 10) + 48); //a[0] = static_cast<int>...
		
		num = num / 10; 
		i--;
	}
		
}

