#pragma once
#include "Item.h"
class Audiobook :
	public Item
{
public:
	void getdata() {
		Item::getdata();
		cout << "Enter duration: ";
		cin >> time;
	}
	void putdata() {
		Item::putdata();
		cout << "\nDuration: " << time;
	}
private:
	double time;
};