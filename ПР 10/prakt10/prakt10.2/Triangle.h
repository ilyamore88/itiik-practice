#pragma once
#include "Dot.h"

class Triangle
{
public:
	Triangle(Dot, Dot, Dot);
	void ShowSides();
	double GetPerim();
	double GetArea();
private:
	Dot dot1;
	Dot dot2;
	Dot dot3;
};

