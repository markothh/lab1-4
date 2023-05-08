#include "EmployeeVector.h"

using namespace std;

namespace TSA
{
	EmployeeVector::EmployeeVector()
	{
		capacity = 1;
		vector = new Employee[capacity];
		size = 0;
	}
	EmployeeVector::~EmployeeVector()
	{
		delete[] vector;
	}

	Employee* EmployeeVector::begin()
	{
		return &vector[0];
	}

	Employee* EmployeeVector::end()
	{
		return &vector[size];
	}

	void EmployeeVector::AddMemory()
	{
		Employee* tmp = new Employee[capacity];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = vector[i];
		}
		delete[] vector;

		capacity *= 2;
		vector = new Employee[capacity];
		for (int i = 0; i < size; i++)
		{
			vector[i] = tmp[i];
		}
		delete[] tmp;
	}

	void EmployeeVector::Add(Employee Employee)
	{
		if (size >= capacity)
		{
			AddMemory();
		}

		vector[size] = Employee;
		size++;
	}

	void EmployeeVector::Remove(int index)
	{
		for (int i = 0; i < size - 1; i++)
		{
			vector[i] = vector[i + 1];
		}

		vector[size] = Employee();
		size--;
	}

	void EmployeeVector::SortBySurname()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (vector[i] < vector[j])
				{
					std::swap(vector[i], vector[j]);
				}
			}
		}
	}

	bool EmployeeVector::isEmpty()
	{
		return size == 0;
	}

	Employee& EmployeeVector::operator[] (int index)
	{
		return vector[index];
	}

	ostream& operator<<(ostream& out, EmployeeVector& Employees)
	{
		for (int i = 0; i < Employees.size; i++)
		{
			out << Employees[i] << endl;
		}

		return out;
	}
}