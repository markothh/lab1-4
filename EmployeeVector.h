#pragma once
#include "Employee.h"

using namespace std;

namespace TSA
{
	class EmployeeVector
	{
	private:
		Employee* vector;
		int size;
		int capacity;

	public:
		EmployeeVector();
		~EmployeeVector();

		Employee* begin();
		Employee* end();

		void AddMemory();
		void Add(Employee);
		void Remove(int);

		bool isEmpty();
		void SortBySurname();

		Employee& operator[] (int);

		friend ostream& operator<<(ostream&, EmployeeVector&);
	};
}