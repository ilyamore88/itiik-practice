#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void privet(string name);
void privet(string name, int k)
{
	cout << name << " " << ", еще раз здравствуйте! "
		<< "Вы ввели " << k << endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Введите своё имя" << endl;
	cin >> name;
	int k;
	cout << "Введите Ваше любимое число" << endl;
	cin >> k;
	privet(name);
	privet(name, k);
	system("pause");
	return 0;
}

void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}