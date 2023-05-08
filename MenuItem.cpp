#include <iostream>
#include "MenuItem.h"

using namespace std;

namespace TSA
{
	MenuItem::MenuItem(string name, function f)
	{
		this->itemName = name;
		this->func = f;
	}

	string MenuItem::getName()
	{
		return itemName;
	}

	void MenuItem::setName(string name)
	{
		this->itemName = name;
	}

	int MenuItem::run()
	{
		return func();
	}
}