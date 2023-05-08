#include <iostream>
#include "MenuItem.h"

using namespace std;

namespace TSA
{
	MenuItem::MenuItem(const char* name, function f) 
	{
		this->itemName = name;
		this->func = f;
	}

	const char* MenuItem::getName()
	{
		return itemName;
	}

	void MenuItem::setName(const char* name)
	{
		this->itemName = name;
	}

	int MenuItem::run()
	{
		return func();
	}
}