#include <iostream>
#include "Audiobook.h"
#include "Item.h"
#include "Paperbook.h"

using namespace std;

int main()
{
	Item* pubarr[100];
	int n = 0;
	char choice;
	do {
		cout << "\Enter data for book or audiobook (b/a)? ";
		cin >> choice;
		switch (choice)
		{
		case 'b':
			pubarr[n] = new Paperbook;
			break;
		case 'a':
			pubarr[n] = new Audiobook;
			break;
		default:
			break;
		}
		pubarr[n++]->getdata();
		cout << "\nContinue (y/n)? ";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
	{
		pubarr[j]->putdata();
	}
	cout << endl;
	system("pause");
	return 0;
}