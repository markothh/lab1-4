#pragma once
#include <iostream>
#include "User.h"
#include "Auto.h"

using namespace std;

namespace TSA
{	
	class Client : public User
	{
	protected:
		Auto automobile;
	public:
		Client();
		Client(string, string, int, string, string, Auto);

		string getName();
		void printInfo();
	};

}