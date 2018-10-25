#include "Triangle.h"
#include "Dot.h"
#include <iostream>

Triangle::Triangle(Dot dot1, Dot dot2, Dot dot3)
{
	this->dot1 = dot1;
	this->dot2 = dot2;
	this->dot3 = dot3;
}

void Triangle::ShowSides()
{
	std::cout << "Сторона a: " << dot1.distanceTo(dot2) << "\n";
	std::cout << "Сторона b: " << dot2.distanceTo(dot3) << "\n";
	std::cout << "Сторона c: " << dot3.distanceTo(dot1) << "\n";
}

double Triangle::GetPerim()
{
	return dot1.distanceTo(dot2) + dot2.distanceTo(dot3) + dot3.distanceTo(dot1);
}

double Triangle::GetArea()
{
	double p = (dot1.distanceTo(dot2) + dot2.distanceTo(dot3) + dot3.distanceTo(dot1)) / 2;
	return sqrt(p*(p - dot1.distanceTo(dot2))*(p - dot2.distanceTo(dot3))*(p - dot3.distanceTo(dot1)));
}

