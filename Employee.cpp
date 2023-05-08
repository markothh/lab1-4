#include "Employee.h"
#include <iostream>

using namespace std;

namespace TSA
{
	Employee::Employee(string name, string lastName, int age, string login, string pass, string job)
	{
		this->name = name;
		this->lastName = lastName;
		this->age = age;
		this->login = login;
		this->pass = pass;
		this->job = job;
	}

	string Employee::getName()
	{
		return User::getName();
	}

	void Employee::printInfo()
	{
		cout << "Info:\n";
		cout << "Name: " << this->name << endl;
		cout << "Last name: " << this->lastName << endl;
		cout << "Age: " << this->age << endl;
		cout << "Login: " << this->login << endl;
		cout << "Job: " << this->job << endl;

	};

	string Employee::getJob()
	{
		return this->job;
	}

	void Employee::setJob(string job)
	{
		this->job = job;
	}
}
