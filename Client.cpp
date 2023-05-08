#include "Client.h"
#include <iostream>
#include "User.h"

using namespace std;
namespace TSA
{
	Client::Client() {};
	
	Client::Client(string name, string lastName, int age, string login, string pass, Auto automobile)
	{
		this->name = name;
		this->lastName = lastName;
		this->age = age;
		this->login = login;
		this->pass = pass;
		this->automobile = automobile;
	}

	string Client::getName()
	{
		return User::getName();
	}
	
	void Client::printInfo()
	{
		User::printInfo();
	};
} 