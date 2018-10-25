#include "Distance.h"
#include <iostream>

using namespace std;

Distance::Distance()
{
	feet = 0;
	inches = 0.0;
}

Distance::Distance(int ft, float in)
{
	feet = ft;
	inches = in;
}

Distance::Distance(float meters)
{
	float fltfeet = MTF * meters;
	feet = int(fltfeet);
	inches = 12 * (fltfeet - feet);
}

void Distance::getdist()
{
	cout << "\n¬ведите число футов : ";
	cin >> feet;
	cout << "\n¬ведите число дюймов : ";
	cin >> inches;
}

void Distance::showdist()
{
	cout << feet << "\' - " << inches << "\"\n";
}

Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance Distance::operator-(Distance d2) const
{
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i < 0)
	{
		f--;
		i += 12.0;
	}
	return Distance(f, i);
}

Distance::operator float() const
{
	float fracfeet = inches / 12;
	fracfeet += static_cast<float>(feet);
	return fracfeet / MTF;
}
