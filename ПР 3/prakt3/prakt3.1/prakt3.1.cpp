#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void privet(string name);
void privet(string name, int k)
{
	cout << name << " " << ", ��� ��� ������������! "
		<< "�� ����� " << k << endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "������� ��� ���" << endl;
	cin >> name;
	int k;
	cout << "������� ���� ������� �����" << endl;
	cin >> k;
	privet(name);
	privet(name, k);
	system("pause");
	return 0;
}

void privet(string name)
{
	cout << name << ", " << "������������!" << endl;
}