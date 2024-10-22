#include <iostream>

using namespace std;

template<class T>
void sorting(T[], int);
template<class T>
void printArray(T[], int);
template<class T>
double srednArifm(T[], int);

int main()
{
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, world";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	sorting(arr, k1);
	for (int i = 0; i < k1; i++) cout << arr[i] << ";";
	cout << endl;
	sorting(arrd, k2);
	for (int i = 0; i < k2; i++) cout << arrd[i] << ";";
	cout << endl;
	sorting(arrc, k3);
	for (int i = 0; i < k3; i++) cout << arrc[i] << ";";
	cout << endl;
	printArray(arr, k1);
	printArray(arrd, k2);
	printArray(arrc, k3);

	cout << "Srednee arifmeticheskoe: " << srednArifm(arr, k1) << endl;
	long arrl[] = { 1233434534,123398098534,123348653947534534,596840975674531 };
	int k4 = sizeof(arrl) / sizeof(arrl[0]);
	cout << "Srednee arifmeticheskoe: " << srednArifm(arrl, k4) << endl;
	cout << "Srednee arifmeticheskoe: " << srednArifm(arrd, k2) << endl;
	cout << "Srednee arifmeticheskoe: " << srednArifm(arrc, k3) << endl;

	system("pause");
	return 0;
}

template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = x;
	}
}

template<class T>
void printArray(T arr[], int size) {
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "; ";
	}
	cout << "\n";
}

template<class T>
double srednArifm(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return (double)sum / size;
}