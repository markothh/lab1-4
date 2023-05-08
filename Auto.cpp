#include "Auto.h"
#include<iostream>

using namespace std;

namespace TSA
{
	Auto::Auto() {}

	Auto::Auto(string mark, double price, int year, string description, string character)
	{
		this->mark = mark;
		this->price = price;
		this->year = year;
		this->description = description;
		this->character = character;
	}

	ostream& operator<<(ostream& out, Auto automobile)
	{
		out << "Mark: " << automobile.mark << endl;
		out << "Price: " << automobile.price << endl;
		out << "Year: " << automobile.year << endl;
		out << "Description: " << automobile.description << endl;
		out << "Character: " << automobile.character << endl;

		return out;
	}
	
	istream& operator>>(istream& in, Auto automobile)
	{
		cout << "Mark: ";
		in >> automobile.mark;
		cout << "Price: ";
		in >> automobile.price;
		cout << "Year: ";
		in >> automobile.year;
		cout << "Description: ";
		in >> automobile.description;
		cout << "Character: ";
		in >> automobile.character;

		return in;
	}
}
