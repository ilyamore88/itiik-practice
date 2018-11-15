#include "Animal.h"

Animal::Animal() {
	this->name = "";
	this->birthDate = time(NULL);
	this->healthy = true;
	this->male = true;
	this->voice = "";
}

Animal::Animal(string name, time_t birthDate, bool male, bool healthy) {
	this->name = name;
	this->birthDate = birthDate;
	this->male = male;
	this->healthy = healthy;
}

int Animal::getAge() {
	time_t currentDate = time(NULL);
	int age = (int)difftime(currentDate, this->birthDate) / (60 * 60 * 24 * 365);
	return age;
}

string Animal::getName() {
	return this->name;
}

time_t Animal::getBirthDate() {
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
