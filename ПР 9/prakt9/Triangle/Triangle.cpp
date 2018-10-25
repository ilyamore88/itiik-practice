#include "Triangle.h"
#include <iostream>
#include <math.h>
#include "ExScore.h"

using namespace std;

Triangle::Triangle() {}

Triangle::Triangle(int a, int b, int c)
{
	Triangle::SetSides(a, b, c);
}

void Triangle::SetSides(int a, int b, int c)
{
	if (a + b <= c)
	{
		throw ExScore("в функции SetSides a + b <= c", c);
	}
	if (a + c <= b)
	{
		throw ExScore("в функции SetSides a + c <= b", b);
	}
	if (b + c <= a)
	{
		throw ExScore("в функции SetSides b + c <= a", a);
	}
	Triangle::set_a(a);
	Triangle::set_b(b);
	Triangle::set_c(c);
}

double Triangle::GetArea()
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a)*(p - b)*(p - c));
}

void Triangle::ShowTriangle()
{
	cout << "\nSide a: " << a << "; side b: " << b << "; side c: " << c << ";\n";
}

void Triangle::set_a(int side)
{
	a = side;
}

void Triangle::set_b(int side)
{
	b = side;
}

void Triangle::set_c(int side)
{
	c = side;
}

int Triangle::get_a()
{
	return a;
}

int Triangle::get_b()
{
	return b;
}

int Triangle::get_c()
{
	return c;
}

Triangle::~Triangle()
{
}
