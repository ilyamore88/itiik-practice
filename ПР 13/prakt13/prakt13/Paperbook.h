#pragma once
#include "Item.h"
class Paperbook :
	public Item
{
public:
	void getdata() {
		Item::getdata();
		cout << "Enter pages count: ";
		cin >> pages;
	}
	void putdata() {
		Item::putdata();
		cout << "\nPages count: " << pages;
	}
private:
	int pages;
};

