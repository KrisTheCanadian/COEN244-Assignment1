#pragma once
class Card
{
private:
	int value; 
	char suit[8];
	static const int SIZE = 8;
public:
	void set_suit(char*);
	char* get_suit();
	void set_value(int);
	int get_value();
	void display();
	Card();
};

