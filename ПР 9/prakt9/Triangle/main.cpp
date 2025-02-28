#include <iostream>
#include "Triangle.h"
#include "ExScore.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Triangle *tr1 = new Triangle();
	int a, b, c;
	try
	{
		cout << "Side a: ";
		cin >> a;
		cout << "Side b: ";
		cin >> b;
		cout << "Side c: ";
		cin >> c;
		tr1->SetSides(a, b, c);
		cout << "Area: " << tr1->GetArea() << endl;
	}
	catch (ExScore ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nЗначение " << ex.iValue << " является недопустимым\n";
	}

	system("pause");
	delete tr1;
	return 0;
}
