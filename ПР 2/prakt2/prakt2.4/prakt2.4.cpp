#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int shotCount;
	double x, y;
	int centerX, centerY;
	bool isWindy;
	centerX = rand() % 3 - 1;
	centerY = rand() % 3 - 1;
	int score = 0;
	cout << "Введите желаемое кол-во выстрелов:\n";
	cin >> shotCount;
	for (int i = 0; i < shotCount; i++) {
		cout << "Введите координаты " << i + 1 << "-го выстрела\n";
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		isWindy = (rand() % 5 == 2) ? true : false;
		if ((pow(x - centerX, 2) + pow(y - centerY, 2) <= 1) && !isWindy) {
			score += 10;
		}
		else if ((pow(x - centerX, 2) + pow(y - centerY, 2) <= 4) && !isWindy) {
			score += 5;
		}
		else if ((pow(x - centerX, 2) + pow(y - centerY, 2) <= 9) && !isWindy) {
			score += 1;
		}
		if (isWindy) {
			cout << "Подул сильный ветер\n";
		}
	}
	cout << "Ты настрелял " << score << " очков\n";
	if (score == shotCount * 10) {
		cout << "Ты настоящий снайпер!" << endl;
	}
	else if (score > shotCount * 1) {
		cout << "Ты неплохо стреляешь, но тебе стоит потренироваться больше" << endl;
	}
	else {
		cout << "Да ты мазила! В следующий раз будь более сосредоточенным" << endl;
	}
	system("pause");
	return 0;
}
