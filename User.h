#pragma once
#include <iostream>

using namespace std;

namespace TSA {
	
	
	class User

	{	
	protected:
		string name;
		string lastName;
		int age;
		string login;
		string pass;
		

	public:
		
		virtual string getName() = 0;
		//virtual void printInfo() = 0;
	};

}