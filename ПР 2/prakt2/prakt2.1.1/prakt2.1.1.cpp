#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "Введите координаты точки\n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (pow(x, 2) + pow(y, 2) < 9 && y > 0) {
		cout << "Точка находится внутри фигуры\n";
	}
	else if (pow(x, 2) + pow(y, 2) > 9 || y < 0) {
		cout << "Точка находится за пределами фигуры\n";
	}
	else {
		cout << "Точка находится на границе фигуры\n";
	}
	system("pause");
	return 0;
}
