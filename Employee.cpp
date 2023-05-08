#include "Employee.h"
#include <iostream>

using namespace std;

namespace TSA
{
	Employee::Employee() {};

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


	string Employee::getJob()
	{
		return this->job;
	}

	void Employee::setJob(string job)
	{
		this->job = job;
	}

	bool Employee::operator<(Employee& employee)
	{
		return this->lastName < employee.lastName;
	}

	bool Employee::operator>(Employee& employee)
	{
		return this->lastName > employee.lastName;
	}

	bool Employee::operator==(Employee& employee)
	{
		return this->lastName == employee.lastName;
	}

	bool Employee::operator!=(Employee& employee)
	{
		return this->lastName != employee.lastName;
	}

	ostream& operator<<(ostream& out, Employee& employee)
	{
		out << "Name: " << employee.name << endl;
		out << "Last name: " << employee.lastName << endl;
		out << "Age: " << employee.age << endl;
		out << "Login: " << employee.login << endl;
		out << "Job: " << employee.job << endl;

		return out;
	}

	istream& operator>>(istream& in, Employee& employee)
	{
		cout << "Name: ";
		in >> employee.name;
		cout << "Last name: ";
		in >> employee.lastName;
		cout << "Age: ";
		in >> employee.age;
		cout << "Login: ";
		in >> employee.login;
		cout << "Password: ";
		in >> employee.pass;
		cout << "Job: ";
		in >> employee.job;

		return in;

	}
}
