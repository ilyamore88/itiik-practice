#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double findArea(double a)
{
	return pow(a, 2) * sqrt(3) / 4;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double P, p, s, a;
	cout << "\nВведите периметр треугольника:\n";
	cin >> P;
	a = P / 3;
	p = P / 2;
	s = findArea(a);
	cout << "Сторона  Площадь\n";
	cout << a << "        " << s << endl;
	system("pause");
    return 0;
}

