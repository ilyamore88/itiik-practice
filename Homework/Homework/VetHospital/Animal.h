#pragma once
#include <string>
#include <ctime>

using namespace std;

class Animal
{
private:
	string name;
	time_t birthDate;
	bool isHealthy;
public:
	Animal();
	Animal(string name, time_t birthDate);
	virtual int getAge();
	string getName();
	time_t getBirthDate();
	~Animal();
};

