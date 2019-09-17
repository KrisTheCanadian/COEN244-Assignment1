#include <iostream>
using namespace std;

void sort_vow(char* input, int length);
int string_length(const char* char_arr);

const int SIZE = 30; // max 28 characters, 1 for null terminator

int main()
{

	char input[SIZE];

	cout << "Enter a 29 character string" << endl; //assuming perfect user.
	cin.getline(input, 29);

	int length = string_length(input);

	sort_vow(input, length);

	cout << input << endl;

	return 0;
}

void sort_vow(char* input, int length) {

	char vowels[5] = { 'a','e','i','o','u' }; //vowels
	char temp;
	int counter = 0;
	for (int i = 0; i < length; i++) {

		for (int j = 0; j < 5; j++) {
			//introduced a counter to fix double letter bug + optimization
			if (*(vowels + j) == *(input + i - counter)) {

				//cout << "[DEBUG] Counter: " << counter << endl;
				//put the character at the end of the array
				temp = *(input + i - counter); 
				
				//cout << "[DEBUG] " << input << endl;

				for (int k = i - counter; k + 1 < length; k++) {
					//shift all the characters left, excluding the empty slot (until null)
					
					*(input + k) = *(input + k + 1);

				//	cout << "[DEBUG] " << input << endl;
				}
				//cout << "[DEBUG] " << input /*<< " " << input[length - 1]*/ << endl;

				//put the character from the end of the array right before null
				*(input + length - 1) = temp;

				//cout << "[DEBUG] TEMP: " << temp << endl;
				counter++;
			}

		}

	}

	return;

}


int string_length(const char* char_arr) {

	int i = 0;

	while (char_arr[i] != 0) { //looking for null terminator in the array

		i++;

	}

	return i;
}
