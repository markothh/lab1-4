#pragma once

#include "MenuItem.h"

namespace TSA
{
	class MyMenu
	{
	private:
		const char* menuName;
		int itemCount;
		int lastSelect;
		MenuItem* menuItems;

	public:
		MyMenu(const char*, MenuItem*, int);

		const char* getName();
		MenuItem* getItems();
		int getCount();
		int getLastSelect();

		void setName(const char*);
		void setCount(int);
		void setLastSelect(int);
		void setItems(MenuItem*);

		void printMenu();
		int runCommand();
	};
}