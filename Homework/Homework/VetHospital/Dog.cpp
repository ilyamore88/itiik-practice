#include "Dog.h"



Dog::Dog() : Animal() {
}

Dog::Dog(string name, string typeName, Calendar* birthDate, bool male, bool healthy) : Animal(name, typeName, birthDate, male, healthy) {
	this->voice = "Woof";
}

void Dog::doSomething() {
	cout << this->getName() << " is barking on couch..." << endl;
}

Dog::~Dog() {
}