#include <iostream>
#include "MyMenu.h"
#include "Client.h"
#include "Employee.h"
#include "Auto.h"

using namespace std;
using namespace TSA;

Auto* autos = new Auto[3]{ Auto("Ford", 1200000, 2003, "cool", "fast"), Auto("Lada", 2222222, 2010, "nice", "beautiful"), Auto("Nissan", 3603432, 2012, "gorgeous", "blue") };

int clientCount = 3;
Client* clients = new Client[5] {Client("Sonya", "Tarasova", 20, "markothh", "123123", autos[0]),
								 Client("Andrey", "Gorelov", 23, "andrey", "321123", autos[1]),
								 Client("Sergey", "Serov", 24, "sergey", "bjhjvgf", autos[2]) };

int employeeCount = 3;
Employee* employees = new Employee[5]{ Employee("Agata", "Belousova", 19, "agata", "irucm", "cashier"),
									   Employee("Victor", "Ovsyannikov", 26, "victor", "ujvr", "top-manager"),
									   Employee("Alisa", "Pavlova", 22, "alisa", "iuthmc", "manager")};

int printEmployees()
{
	cout << "Employees info:\n";
	for (int i = 0; i < employeeCount; i++)
	{
		cout << employees[i] << endl;
	}
	return 0;
};

int printClients()
{
	cout << "Clients info:\n";
	for (int i = 0; i < clientCount; i++)
	{
		cout << clients[i] << endl;
	}
	return 0;
};
	
int addEmployee()
{
	Employee employee = Employee();
	cout << "Enter the employee info:\n";
	cin >> employee;

	employees[employeeCount] = employee;
	employeeCount++;

	return 0;
}

int removeClient()
{
	Client client{};
	cout << "Enter the client data:\n";
	cin >> client;
	
	int removeIndex = -1;

	for (int i = 0; i < clientCount; i++)
	{
		if (clients[i] == client)
		{
			removeIndex = i;
			break;
		}
	}

	if (removeIndex == -1)
	{
		cout << "There is no client with such data in the base.\n";
	}
	else
	{
		for (int i = removeIndex; i < clientCount; i++)
		{
			clients[i] = clients[i + 1];
		}

		clients[clientCount] = Client();
		clientCount--;

		cout << "Client has been succesfully removed from the base.\n";
	}

	return 0;
}

int clientSort()
{
	for (int i = 0; i < clientCount; i++)
	{
		for (int j = 0; j < clientCount; j++)
		{
			if (clients[i] < clients[j])
			{
				swap(clients[i], clients[j]);
			}
		}
	}
	return 0;
}

int employeeSort()
{
	for (int i = 0; i < employeeCount; i++)
	{
		for (int j = 0; j < employeeCount; j++)
		{
			if (employees[i] > employees[j])
			{
				swap(employees[i], employees[j]);
			}
		}
	}
	return 0;
}


const int MENU_COUNT = 6;

int main()
{
	MenuItem menuItem1("Print employees info", printEmployees);
	MenuItem menuItem2("Print clients info", printClients);
	MenuItem menuItem3("Add an employee", addEmployee);
	MenuItem menuItem4("Remove a client", removeClient);
	MenuItem menuItem5("Increasing clients sort by last name", clientSort);
	MenuItem menuItem6("Decreasing employees sort by last name", employeeSort);


	MenuItem items[MENU_COUNT]{ menuItem1, menuItem2,menuItem3, menuItem4, menuItem6, menuItem5 };

	MyMenu menu("My menu", items, MENU_COUNT);


	do
	{
		menu.printMenu();
		menu.runCommand();
		cout << "-----------------------------------------------------------------------------------" << endl;
	} while (menu.getLastSelect() != 0);
	return 0;
}