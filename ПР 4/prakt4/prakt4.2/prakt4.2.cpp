#include <iostream>
#include <math.h>

using namespace std;

int myRoot(double a, double b, double c, double &x1, double &x2)
{
	double discr = pow(b, 2) - 4 * a * c;
	if (discr < 0)
	{
		return -1;
	}
	x1 = (-b + sqrt(discr)) / (2 * a);
	x2 = (-b - sqrt(discr)) / (2 * a);
	if (discr == 0) 
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2;
	cout << "Данная программа позволяет найти корни уравнения вида ax^2+bx+c=0\nДля нахождения корней введите коэффициенты a, b и c\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	int code = myRoot(a, b, c, x1, x2);
	if (code == 1)
	{
		cout << "Было найдено два корня. x1 = " << x1 << "; x2 = " << x2 << endl;
	}
	else if (code == 0)
	{
		cout << "Обы корня равны x1 = " << x1<<endl;
	}
	else
	{
		cout << "У данного уравнения отсутствуют корни" << endl;
	}
	system("pause");
	return 0;
}
