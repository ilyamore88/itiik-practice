#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>
#include <list>

using namespace std;

void printMenu();
Animal* createAnimal();

int main() {
	list<Animal*> animals;
	//printMenu();
	animals.push_back(createAnimal());
	Animal* anim = animals.back();
	anim->print();
	anim->doSomething();
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

Animal* createAnimal() {
	cout << "Create (1 - Cat, 2 - Dog): ";
	int userChoice;
	try {
		cin >> userChoice;
		if (userChoice != 1 && userChoice != 2) {
			throw;
		}
	}
	catch (exception ex) {
		cout << "Error! Invalid input choice" << endl;
	}
	Animal *animal = new Animal();
	string name;
	Calendar* birthDate = new Calendar();
	char birthDateS[100];
	string sex;
	bool isMale;
	string healthy;
	bool isHealthy;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter birth date (DD.MM.YYYY): ";
	try {
		cin >> birthDateS;
		int day;
		int month;
		int year;
		sscanf_s(birthDateS, "%d.%d.%d", &day, &month, &year);
		if ((day < 1) || (day > 31) || (month < 1) || (month > 12)) {
			throw;
		}
		birthDate->setDate(day, month, year);
	}
	catch (exception ex) {
		cout << "Error! Invalid input date" << endl;
	}
	cout << "Enter sex (m/f): ";
	try {
		cin >> sex;
		if ((sex != "m") && (sex != "f")) {
			throw;
		}
	}
	catch (exception ex) {
		cout << "Error! Invalid input sex" << endl;
	}

	isMale = (sex == "m") ? true : false;
	cout << "Is healthy (y/n)? ";
	try {
		cin >> healthy;
		if ((healthy != "y") && (healthy != "n")) {
			throw;
		}
	}
	catch (exception ex) {
		cout << "Error! Invalid input health" << endl;
	}
	isHealthy = (healthy == "y") ? true : false;
	switch (userChoice)
	{
	case 1:
		animal = new Cat(name, birthDate, isMale, isHealthy);
		break;
	case 2:
		animal = new Dog(name, birthDate, isMale, isHealthy);
	default:
		break;
	}
	return animal;
}