#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	cout << "Введите год: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	system("pause");
	return 0;
}
