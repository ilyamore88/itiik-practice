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
	string typeName;
	Calendar* birthDate;
	bool healthy;
	bool male;
public:
	Animal();
	Animal(string name, string typeName, Calendar* birthDate, bool male, bool healthy);
	virtual void doSomething();
	void print();
	void printInfo();
	int getAge();
	void getVoice();
	string getName();
	Calendar* getBirthDate();
	void setName(string name);
	void setBirthDate(Calendar* birthDate);
	void setSex(bool male);
	void setHealthy(bool healthy);
	bool isMale();
	bool isHealthy();
	~Animal();
};

