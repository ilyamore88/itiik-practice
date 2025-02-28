#include <iostream>

using namespace std;

int minAB(int a, int b)
{
	if (a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int maxAB(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива: ";
	int n = 0;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}
	int s = 0;
	int sOtr = 0;
	int sPol = 0;
	int sNech = 0;
	int sChet = 0;
	int min = mas[0];
	int max = mas[0];
	int minIndex = 0, maxIndex = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
		if (mas[i] < 0)
		{
			sOtr += mas[i];
		}
		else
		{
			sPol += mas[i];
		}
		if (i % 2 != 0)
		{
			sNech += mas[i];
		}
		else
		{
			sChet += mas[i];
		}
		if (mas[i] < min)
		{
			min = mas[i];
			minIndex = i;
		}
		if (mas[i] > max)
		{
			max = mas[i];
			maxIndex = i;
		}
	}
	int s1 = 1;
	for (int i = minAB(minIndex, maxIndex) + 1; i < maxAB(minIndex, maxIndex); i++)
	{
		s1 *= mas[i];
	}
	cout << "Сумма всех элементов: " << s << "; Среднее значение: " << double(s) / n << endl;
	cout << "Сумма положительных элементов массива: " << sPol << endl;
	cout << "Сумма отрицательных элементов массива: " << sOtr << endl;
	cout << "Сумма чётных элементов массива: " << sChet << endl;
	cout << "Сумма нечётных элементов массива: " << sNech << endl;
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива: " << max << endl;
	cout << "Произведение элементов между минимальным и максимальным: " << s1 << endl;
	system("pause");
	delete[] mas;
	return 0;
}