#include "Cat.h"



Cat::Cat() : Animal() {
}

Cat::Cat(string name, Calendar* birthDate, bool male, bool healthy) : Animal(name, birthDate, male, healthy) {
	this->voice = "Meow";
}

void Cat::doSomething() {
	cout << this->getName() << " is sleeping..." << endl;
}

Cat::~Cat() {
}
