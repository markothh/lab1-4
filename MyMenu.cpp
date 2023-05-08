#include <iostream>
#include "MyMenu.h"

using namespace std;

namespace TSA
{
	MyMenu::MyMenu(string name, MenuItem* items, int count)
	{
		this->menuName = name;
		this->menuItems = items;
		this->itemCount = count;
		this->lastSelect = -1;
	}

	//геттеры
	string MyMenu::getName()
	{
		return menuName;
	}

	MenuItem* MyMenu::getItems()
	{
		return menuItems;
	}

	int MyMenu::getLastSelect()
	{
		return lastSelect;
	}

	int MyMenu::getCount()
	{
		return itemCount;
	}

	//сеттеры
	void MyMenu::setName(string name)
	{
		menuName = name;
	};

	void MyMenu::setCount(int count)
	{
		itemCount = count;
	};

	void MyMenu::setLastSelect(int select)
	{
		lastSelect = select;
	};

	void MyMenu::setItems(MenuItem* items)
	{
		menuItems = items;
	};

	void MyMenu::printMenu()
	{
		for (int i = 0; i < itemCount; i++)
		{
			cout << i + 1 << '.' << menuItems[i].getName() << endl;
		}
		cout << "0. exit" << endl;
	}

	int MyMenu::runCommand()
	{
		cout << "\nEnter the menu item: ";
		cin >> lastSelect;
		if (lastSelect == 0)
		{
			return 0;
		}
		return menuItems[lastSelect - 1].run();
	}

}