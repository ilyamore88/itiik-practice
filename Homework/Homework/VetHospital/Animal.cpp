#include "Animal.h"

Animal::Animal() {
	this->name = "";
	this->birthDate = new Calendar();
	this->healthy = true;
	this->male = true;
	this->voice = "";
}

Animal::Animal(string name, string typeName, Calendar* birthDate, bool male, bool healthy) {
	this->name = name;
	this->typeName = typeName;
	this->birthDate = birthDate;
	this->male = male;
	this->healthy = healthy;
}

void Animal::doSomething() {
}

void Animal::print() {
	cout << "Name: " << this->name << endl;
	cout << "Class: " << this->typeName << endl;
	cout << "Age: " << this->getAge() << endl;
	cout << "Sex: " << (this->male ? "male" : "female") << endl;
	cout << "Healthy: " << (this->healthy ? "yes" : "no") << endl;
	cout << "Voice: " << this->voice << endl;
	this->doSomething();
}

void Animal::printInfo() {
	cout << "Name: " << this->name << "; Age: " << this->getAge() << "; Healthy: " << (this->healthy ? "yes" : "no") << endl;
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

void Animal::setName(string name) {
	this->name = name;
}

void Animal::setBirthDate(Calendar* birthDate) {
	this->birthDate = birthDate;
}

void Animal::setSex(bool male) {
	this->male = male;
}

void Animal::setHealthy(bool healthy) {
	this->healthy = healthy;
}

Animal::~Animal() {
}
