#pragma once
#include "Cat.h"
class Kitty :
	public Cat
{
public:
	Kitty();
	Kitty(string name, string typeName, Calendar* birthDate, bool male, bool healthy);
	void doSomething();
	~Kitty();
};

