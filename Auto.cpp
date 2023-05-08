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
}
