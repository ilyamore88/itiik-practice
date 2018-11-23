#include "Animal.h"
#include "Cat.h"
#include "Kitty.h"
#include "Dog.h"
#include <iostream>
#include <list>

using namespace std;

void printMenu();
Animal* createAnimal();
void printAnimals(list<Animal*> animals);
int printInfoAboutAnimal(list<Animal*> animals);
void changeInfoAboutAnimal(list<Animal*> animals);
list<Animal*> deleteAnimal(list<Animal*> animals);

int main() {
	system("mode con cols=56 lines=25");
	list<Animal*> animals;
	while (true) {
		printMenu();
		int choice = 0;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			animals.push_back(createAnimal());
			break;
		case 2:
			printAnimals(animals);
			system("pause");
			break;
		case 3:
			printInfoAboutAnimal(animals);
			system("pause");
			break;
		case 4:
			changeInfoAboutAnimal(animals);
			break;
		case 5:
			animals = deleteAnimal(animals);
			break;
		default:
			break;
		}
	}
	return 0;
}

void printMenu() {
	system("cls");
	cout << "~~~~~~~~~~~~~~~~~~~~VetHospital v1.0~~~~~~~~~~~~~~~~~~~~\n";
	cout << "1 - add animal\n";
	cout << "2 - print animals\n";
	cout << "3 - get all info about animal\n";
	cout << "4 - change info about animal\n";
	cout << "5 - delete animal\n\n";
	cout << "0 - exit\n";
}

Animal* createAnimal() {
	system("cls");
	cout << "Create (1 - Cat, 2 - Dog, 3 - Kitty): ";
	int userChoice;
	try {
		cin >> userChoice;
		if (userChoice != 1 && userChoice != 2 && userChoice != 3) {
			throw;
		}
	}
	catch (exception ex) {
		cout << "Error! Invalid input choice" << endl;
	}
	Animal *animal = new Animal();
	string name;
	string typeName;
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
		typeName = "Cat";
		animal = new Cat(name, typeName, birthDate, isMale, isHealthy);
		break;
	case 2:
		typeName = "Dog";
		animal = new Dog(name, typeName, birthDate, isMale, isHealthy);
		break;
	case 3:
		typeName = "Kitty";
		animal = new Kitty(name, typeName, birthDate, isMale, isHealthy);
		break;
	default:
		break;
	}
	return animal;
}

void printAnimals(list<Animal*> animals) {
	system("cls");
	list<Animal*>::iterator iter = animals.begin();
	int i = 1;
	while (iter != animals.end())
	{
		cout << i++ << ". ";
		(*iter++)->printInfo();
		cout << "\n";
	}
}

int printInfoAboutAnimal(list<Animal*> animals) {
	printAnimals(animals);
	int number;
	cout << "Enter animals number: ";
	cin >> number;
	list<Animal*>::iterator animal = animals.begin();
	std::advance(animal, --number);
	Animal* a = *animal;
	a->print();
	return number;
}

void changeInfoAboutAnimal(list<Animal*> animals) {
	int number = printInfoAboutAnimal(animals);
	list<Animal*>::iterator animal = animals.begin();
	std::advance(animal, number);
	Animal* a = *animal;
	int number1;
	string name;
	Calendar* birthDate = new Calendar();
	char birthDateS[100];
	string sex;
	string healthy;
	cout << "Change: ";
	cin >> number1;
	system("cls");
	switch (number1)
	{
	case 1:
		cout << "Change name (" << a->getName() << "): ";
		cin >> name;
		a->setName(name);
		break;
	case 2:
		cout << "You can't change it";
		break;
	case 3:
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
			a->setBirthDate(birthDate);
		}
		catch (exception ex) {
			cout << "Error! Invalid input date" << endl;
		}
		break;
	case 4:
		cout << "Enter sex (m/f): ";
		try {
			cin >> sex;
			if ((sex != "m") && (sex != "f")) {
				throw;
			}
			a->setSex((sex == "m") ? true : false);
		}
		catch (exception ex) {
			cout << "Error! Invalid input sex" << endl;
		}
		break;
	case 5:
		cout << "Is healthy (y/n)? ";
		try {
			cin >> healthy;
			if ((healthy != "y") && (healthy != "n")) {
				throw;
			}
			a->setHealthy((healthy == "y") ? true : false);
		}
		catch (exception ex) {
			cout << "Error! Invalid input health" << endl;
		}
		break;
	case 6:
		cout << "You can't change it";
		break;
	default:
		break;
	}
}

list<Animal*> deleteAnimal(list<Animal*> animals) {
	int number = printInfoAboutAnimal(animals);
	string sure;
	cout << "Are you sure? (y/n): ";
	try {
		cin >> sure;
		if ((sure != "y") && (sure != "n")) {
			throw;
		}
		if (sure == "y") {
			list<Animal*>::iterator it = animals.begin();
			advance(it, number);
			animals.erase(it);
		}
		return animals;
	}
	catch (exception ex) {
		cout << "Error! Invalid input health" << endl;
	}
}