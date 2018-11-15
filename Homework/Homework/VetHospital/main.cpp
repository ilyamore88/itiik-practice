#include "Animal.h"
#include <iostream>

using namespace std;

void printMenu();

int main() {
	printMenu();
	system("pause");
	return 0;
}

void printMenu() {
	cout << "VetHospital v1.0\n";
	cout << "1 - add animal\n";
	cout << "2 - print animals\n";
	cout << "3 - delete animal\n";
	cout << "4 - change info about animal\n";
	cout << "5 - get all info about animal\n";
}