#include <iostream>
#include "Vector.h"
#include "MyMenu.h"
#include "Auto.h"
#include "Client.h"
#include "Employee.h"


using namespace std;
using namespace TSA;

Auto* autos = new Auto[3]{ Auto("Ford", 1200000, 2003, "cool", "fast"), Auto("Lada", 2222222, 2010, "nice", "beautiful"), Auto("Nissan", 3603432, 2012, "gorgeous", "blue") };

Vector<Client> clients = Vector<Client>();
Vector<Employee> employees = Vector<Employee>();

void init()
{
	clients.Add(Client("Sonya", "Tarasova", 20, "markothh", "123123", autos[0]));
	clients.Add(Client("Andrey", "Gorelov", 23, "andrey", "321123", autos[1]));
	clients.Add(Client("Sergey", "Serov", 24, "sergey", "bjhjvgf", autos[2]));

	employees.Add(Employee("Agata", "Belousova", 19, "agata", "irucm", "cashier"));
	employees.Add(Employee("Victor", "Ovsyannikov", 26, "victor", "ujvr", "top-manager"));
	employees.Add(Employee("Alisa", "Pavlova", 22, "alisa", "iuthmc", "manager"));
}

int printEmployees()
{
	cout << "Employees info:\n";
	for (Employee employee : employees)
	{
		cout << employee << endl;
	}
	return 0;
};

int printClients()
{
	cout << "Clients info:\n";
	for (Client client : clients)
	{
		cout << client << endl;
	}
	return 0;
};
	
int addEmployee()
{
	Employee employee = Employee();
	cout << "Enter the employee info:\n";
	cin >> employee;

	employees.Add(employee);

	return 0;
}

int removeClient()
{
	Client client{};
	cout << "Enter the client data:\n";
	cin >> client;
	
	int removeIndex = -1;

	for (int i = 0; i < clients.getSize(); i++)
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
		clients.Remove(removeIndex);
		cout << "The client has been successfully removed.\n";
	}

	return 0;
}

int clientSort()
{
	clients.SortBySurname();
	return 0;
}

int employeeSort()
{
	employees.SortBySurname();
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

	init();

	do
	{
		menu.printMenu();
		menu.runCommand();
		cout << "-----------------------------------------------------------------------------------" << endl;
	} while (menu.getLastSelect() != 0);
	return 0;
}