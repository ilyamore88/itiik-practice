#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	double inches;
};

Distance AddDist(const Distance &d1, const Distance &d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.feet++;
		d.inches -= 12.0;
	}
	return d;
}

Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "\nВведите число дюймов: ";
	cin >> d.inches;
	return d;
}

void ShowDist(const Distance &d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер массива расстояний ";
	cin >> n;
	Distance * masDist = new Distance[n];
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
	}
	Distance dSum = { 0, 0.0 };
	for (int i = 0; i < n; i++)
	{
		dSum = AddDist(dSum, masDist[i]);
	}
	cout << "Сумма длин всех элементов массива: ";
	ShowDist(dSum);

	delete[] masDist;
	system("pause");
	return 0;
}
