#include "Cat.h"



Cat::Cat() : Animal() {
}

Cat::Cat(string name, string typeName, Calendar* birthDate, bool male, bool healthy) : Animal(name, typeName, birthDate, male, healthy) {
	this->voice = "Meow";
}

void Cat::doSomething() {
	cout << this->getName() << " is sleeping..." << endl;
}

Cat::~Cat() {
}
