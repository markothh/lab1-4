#pragma once
#include <iostream>
#include "User.h"
#include "Auto.h"

using namespace std;

namespace TSA
{	
	class Client : public User
	{
	private:
		Auto automobile;
	public:
		Client();
		Client(string, string, int, string, string, Auto);

		string getName();

		bool operator<(Client& client);
		bool operator>(Client& client);
		bool operator==(Client& client);
		bool operator!=(Client& client);

		friend ostream& operator<<(ostream& out, Client& client);
		friend istream& operator>>(istream& in, Client& client);
	};

}