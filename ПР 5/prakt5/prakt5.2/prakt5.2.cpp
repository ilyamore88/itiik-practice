#include <iostream>
#include <fstream>

using namespace std;

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b));

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream out("mass.txt", ios::trunc);
	out.close();
	bool(*from_f[2])(int, int) = { from_min,from_max };
	cout << "Введите размер массива: ";
	int N = 0;
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	int my_choose = 0;
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: ";
	show_array(A, N);
	bubble_sort(A, N, (*from_f[my_choose - 1]));
	show_array(A, N);
	system("pause");
	delete[] A;
	return 0;
}

void show_array(const int Arr[], const int N)
{
	ofstream out("mass.txt", ios::app);
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
		out << Arr[i] << " ";
	}
	cout << "\n";
	out << "\n";
	out.close();
}

bool from_min(const int a, const int b)
{
	return a > b;
}

bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}
