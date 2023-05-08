#pragma once
#include <iostream>
#include "User.h"

using namespace std;

namespace TSA
{
	class Employee : public User
	{
	protected:
		std::string job;

	public:
		Employee(string, string, int, string, string, string);

		string getName();
		void printInfo();
		
		void setJob(string job);
		string getJob();
	};

}