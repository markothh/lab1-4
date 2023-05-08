#pragma once

#include "MenuItem.h"

using namespace std;

namespace TSA
{
	class MyMenu
	{
	private:
		string menuName;
		int itemCount;
		int lastSelect;
		MenuItem* menuItems;

	public:
		MyMenu(string, MenuItem*, int);

		string getName();
		MenuItem* getItems();
		int getCount();
		int getLastSelect();

		void setName(string);
		void setCount(int);
		void setLastSelect(int);
		void setItems(MenuItem*);

		void printMenu();
		int runCommand();
	};
}