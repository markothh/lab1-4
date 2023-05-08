#include <iostream>
#include "MyMenu.h"

using namespace std;
using namespace TSA;

int printNum()
{
	cout << "Your num: 6434\n";
	return 0;
}

int printHello()
{
	cout << "Hello\n";
	return 0;
}

int printGoodbye()
{
	cout << "Goodbye\n";
	return 0;
}

const int COUNT = 3;

int main()
{
	MenuItem menuItem1("Num output", printNum);
	MenuItem menuItem2("Hello output", printHello);
	MenuItem menuItem3("String output", printGoodbye);

	MenuItem items[COUNT]{ menuItem1, menuItem2,menuItem3 };

	MyMenu menu("My menu", items, COUNT);


	do 
	{ 
		menu.printMenu();
		menu.runCommand();
		cout << endl;
	}
	while (menu.getLastSelect() != 0);
	return 0;
}