#include "Animal.h"



Animal::Animal()
{
	this->name = "";
	this->birthDate = time(NULL);
}

Animal::Animal(string name, time_t birthDate)
{
	this->name = name;
	this->birthDate = birthDate;
}

int Animal::getAge()
{
	time_t currentDate = time(NULL);
	int age = (int)difftime(currentDate, this->birthDate) / (60 * 60 * 24 * 365);
	return age;
}

string Animal::getName()
{
	return this->name;
}

time_t Animal::getBirthDate()
{
	return this->birthDate;
}

Animal::~Animal()
{
}
