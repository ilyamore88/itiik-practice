#pragma once
#include <string>
#include <ctime>

using namespace std;

class Animal
{
private:
	string name;
	time_t birthDate;
	bool healthy;
	bool male;
	string voice;
public:
	Animal();
	Animal(string name, time_t birthDate, bool male, bool healthy);
	virtual int getAge();
	string getName();
	time_t getBirthDate();
	bool isMale();
	bool isHealthy();
	~Animal();
};

