#include <iostream>
#include "Dot.h"
#include "Triangle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Dot dots[3];
	cout << "Введите координаты вершин треугольника\n";
	for (int i = 0; i < 3; i++)
	{
		double x, y;
		cout << "x" << i << " = ";
		cin >> x;
		cout << "y" << i << " = ";
		cin >> y;
		dots[i].SetCoord(x, y);
	}
	Triangle *triag1 = new Triangle(dots[0], dots[1], dots[2]);
	triag1->ShowSides();
	cout << "Периметр треугольника: " << triag1->GetPerim() << "\n";
	cout << "Площадь треугольника: " << triag1->GetArea() << "\n";

	system("pause");
	delete triag1;
	return 0;
}