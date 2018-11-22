#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat();
	Cat(string name, string typeName, Calendar* birthDate, bool male, bool healthy);
	void doSomething();
	~Cat();
};

