#pragma once
#include <iostream>

using namespace std;

namespace TSA
{
	class Auto {
	protected:
		string mark;
		double price;
		int year;
		string description;
		string character;

	public:
		Auto();
		Auto(string, double, int, string, string);
	};


}