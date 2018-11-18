#include "Animal.h"

Animal::Animal() {
	this->name = "";
	this->birthDate = new Calendar();
	this->healthy = true;
	this->male = true;
	this->voice = "";
}

Animal::Animal(string name, Calendar* birthDate, bool male, bool healthy) {
	this->name = name;
	this->birthDate = birthDate;
	this->male = male;
	this->healthy = healthy;
}

void Animal::doSomething() {
}

void Animal::print() {
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->getAge() << endl;
	cout << "Sex: " << (this->male ? "male" : "female") << endl;
	cout << "Healthy: " << (this->healthy ? "yes" : "no") << endl;
	cout << "Voice: " << this->voice << endl;
}

int Animal::getAge() {
	time_t currentDate = time(0);
	int age = this->birthDate->getDifferentInYears();
	return age;
}

void Animal::getVoice() {
	cout << this->name << " say " << this->voice;
}

string Animal::getName() {
	return this->name;
}

Calendar* Animal::getBirthDate() {
	return this->birthDate;
}

bool Animal::isMale() {
	return this->male;
}

bool Animal::isHealthy() {
	return this->healthy;
}

Animal::~Animal() {
}
