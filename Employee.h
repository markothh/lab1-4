#pragma once
#include <iostream>
#include "User.h"

using namespace std;

namespace TSA
{
	class Employee : public User
	{
	private:
		std::string job;

	public:
		Employee();
		Employee(string, string, int, string, string, string);

		string getName();
		
		void setJob(string job);
		string getJob();

		bool operator<(Employee& employee);
		bool operator>(Employee& employee);
		bool operator==(Employee& employee);
		bool operator!=(Employee& employee);

		friend ostream& operator<<(ostream& out, Employee& employee);
		friend istream& operator>>(istream& in, Employee& employee);
	};

}