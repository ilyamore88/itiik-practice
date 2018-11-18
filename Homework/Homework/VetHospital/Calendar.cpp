#include "Calendar.h"


Calendar::Calendar()
{
}


Calendar::Calendar(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Calendar::setDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int Calendar::getDifferentInYears() {
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	Calendar *currentDate = new Calendar(timeinfo->tm_mday, timeinfo->tm_mon + 1, timeinfo->tm_year+1900);
	int diffYear;
	diffYear = currentDate->year - this->year;
	if (currentDate->month - this->month < 0) {
		diffYear--;
	}
	if ((currentDate->month - this->month <= 0) && (currentDate->day - this->day < 0)) {
		diffYear--;
	}
	return diffYear;
}


Calendar::~Calendar()
{
}
