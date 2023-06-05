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

	string Client::getLogin()
	{
		return this->login;
	}

	bool Client::operator<(Client& client)
	{
		return this->lastName < client.lastName;
	}

	bool Client::operator>(Client& client)
	{
		return this->lastName > client.lastName;
	}

	bool Client::operator==(Client& client)
	{
		return this->name == client.name && this->lastName == client.lastName && this->login == client.login;
	}

	bool Client::operator!=(Client& client)
	{
		return !(this->name == client.name && this->lastName == client.lastName && this->login == client.login);
	}

	ostream& operator<<(ostream& out, Client& client)
	{
		out << "Name: " << client.name << endl;
		out << "Last name: " << client.lastName << endl;
		out << "Age: " << client.age << endl;
		out << "Login: " << client.login << endl;
		out << "Auto info:\n" << client.automobile;

		return out;
	}

	istream& operator>>(istream& in, Client& client)
	{
		try
		{
			cout << "Name: ";
			in >> client.name;
			if (client.name.find_first_of("0123456789") != -1)
				throw runtime_error("Name must not contain numbers");
			cout << "Last name: ";
			in >> client.lastName;
			if (client.name.find_first_of("0123456789") != -1)
				throw runtime_error("Last name must not contain numbers");
			cout << "Age: ";
			if ((in >> client.age).fail())
				throw runtime_error("Age must be a number");
			cout << "Login: ";
			in >> client.login;
			cout << "Password: ";
			in >> client.pass;
			cout << "Auto info:" << endl;
			in >> client.automobile;
			return in;
		}
		catch (exception e)
		{
			cerr << e.what() << endl;
			in.clear();
			in.ignore(255, '\n');
			in.clear();
			return in;
		}

		
	}
} 