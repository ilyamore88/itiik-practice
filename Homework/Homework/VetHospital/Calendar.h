#pragma once
#include <ctime>
class Calendar
{
private:
	int day;
	int month;
	int year;
public:
	Calendar();
	Calendar(int day, int month, int year);
	void setDate(int day, int month, int year);
	int getDifferentInYears();
	int getDay() {
		return this->day;
	}
	int getMonth() {
		return this->month;
	}
	int getYear() {
		return this->year;
	}
	~Calendar();
};

