#pragma once

#include <string>
#include <iostream>

using namespace std;

class Item
{
public:
	virtual void getdata() {
		cout << "\nEnter header: ";
		cin >> title;
		cout << "Enter price: ";
		cin >> price;
	}
	virtual void putdata() {
		cout << "\nHeader: " << title;
		cout << "\nPrice: " << price;
	}
private:
	string title;
	double price;
};

