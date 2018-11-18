#include "Dog.h"



Dog::Dog() : Animal() {
}

Dog::Dog(string name, Calendar* birthDate, bool male, bool healthy) : Animal(name, birthDate, male, healthy) {
	this->voice = "Woof";
}

void Dog::doSomething() {
	cout << this->getName() << " is barking on couch..." << endl;
}

Dog::~Dog() {
}