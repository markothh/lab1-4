#include <iostream>
#include "MyMenu.h"
#include "Client.h"
#include "Employee.h"
#include "Auto.h"

using namespace std;
using namespace TSA;

int printClientInfo()
{
	Client client{ "Sonya", "Tarasova", 20, "markothh", "123123", Auto{} };
	client.printInfo();
	return 0;
};
	

int printEmployeeInfo()
{
	Employee employee{ "Ivan", "Ivanov", 20, "ivan", "123123", "cashier"};
	employee.printInfo();
	return 0;
}

int changeJob()
{
	Employee employee{ "Ivan", "Ivanov", 20, "ivan", "123123", "cashier" };
	cout << "Last job: " << employee.getJob() << endl;
	employee.setJob("manager");
	cout << "Current job: " << employee.getJob() << endl;
	return 0;
}

const int COUNT = 3;

int main()
{
	MenuItem menuItem1("Client info output", printClientInfo);
	MenuItem menuItem2("Employee info output", printEmployeeInfo);
	MenuItem menuItem3("Change employee job", changeJob);

	MenuItem items[COUNT]{ menuItem1, menuItem2,menuItem3 };

	MyMenu menu("My menu", items, COUNT);


	do
	{
		menu.printMenu();
		menu.runCommand();
		cout << "-----------------------------------------------------------------------------------" << endl;
	} while (menu.getLastSelect() != 0);
	return 0;
}