#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(0, "rus");
	cout << "Введите небольшое четверостишие с клавиатуры:\n";
	string line[4];
	for (int i = 0; i < 4; i++)
	{
		getline(cin, line[i]);
	}
	ofstream out("verse.txt", ios::out);
	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		out << line[i] << "\n";
	}
	out.close();
	system("pause");
	return 0;
}
