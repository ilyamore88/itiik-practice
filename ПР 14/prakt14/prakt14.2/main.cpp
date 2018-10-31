#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	::array<int, long> numbers(100);
	::array<float, float> values(200);
	int i;
	for (i = 0; i < 50; i++) {
		numbers.add_value(i);
	}
	numbers.show_array();
	cout << "Sum = " << numbers.sum() << endl;
	cout << "Average = " << numbers.average_value() << endl;
	for (i = 0; i < 100; i++) {
		values.add_value(i * 100);
	}
	values.show_array();
	cout << "Sum = " << values.sum() << endl;
	cout << "Average = " << values.average_value() << endl;

	system("pause");
	return 0;
}