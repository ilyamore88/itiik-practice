#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog();
	Dog(string name, Calendar* birthDate, bool male, bool healthy);
	void doSomething();
	~Dog();
};

