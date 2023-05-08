#pragma once
#include <iostream>

using namespace std;

namespace TSA
{
	class Auto {
	private:
		string mark;
		double price;
		int year;
		string description;
		string character;

	public:
		Auto();
		Auto(string, double, int, string, string);

		friend ostream& operator<<(ostream& out, Auto automobile);
		friend istream& operator>>(istream& in, Auto automobile);

	};
	


}