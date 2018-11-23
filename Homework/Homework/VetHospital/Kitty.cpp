#include "Kitty.h"



Kitty::Kitty()
{
}

Kitty::Kitty(string name, string typeName, Calendar* birthDate, bool male, bool healthy) : Cat(name, typeName, birthDate, male, healthy) {
	this->voice = "meow-meow";
}

void Kitty::doSomething() {
	cout << this->getName() << " acting in video with kitties..." << endl;
}

Kitty::~Kitty()
{
}
