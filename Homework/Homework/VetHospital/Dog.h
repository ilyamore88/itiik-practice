#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog();
	Dog(string name, string typeName, Calendar* birthDate, bool male, bool healthy);
	void doSomething();
	~Dog();
};

