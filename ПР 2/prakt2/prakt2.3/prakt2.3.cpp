#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int k, m;
	int sum = 0;
	cout << "k = ";
	cin >> k;
	cout << "m = ";
	cin >> m;
	for (int i = 1; i <= 100; i++) {
		if (i > k && i < m) {
			continue;
		}
		sum += i;
	}
	cout << "sum = " << sum << endl;
	system("pause");
	return 0;
}