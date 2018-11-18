#pragma once
#include <string>
#include "Calendar.h"
#include <iostream>

using namespace std;

class Animal
{
protected:
	string voice;
private:
	string name;
	Calendar* birthDate;
	bool healthy;
	bool male;
public:
	Animal();
	Animal(string name, Calendar* birthDate, bool male, bool healthy);
	virtual void doSomething();
	void print();
	int getAge();
	void getVoice();
	string getName();
	Calendar* getBirthDate();
	bool isMale();
	bool isHealthy();
	~Animal();
};

