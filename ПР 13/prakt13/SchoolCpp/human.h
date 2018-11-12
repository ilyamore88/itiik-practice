#pragma once 

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class human {
public:
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	
	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void putdata() {
		cout << "\nLast name: " << last_name << "\nName: " << name << "\nSecond name: " << second_name;
	}

	void example(int num){
		cout << "parent";
	}
private:
	string name; 
	string last_name; 
	string second_name; 
};