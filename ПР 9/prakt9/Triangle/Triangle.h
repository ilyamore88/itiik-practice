#pragma once
#include <string>

using namespace std;

class Triangle
{
public:
	Triangle();
	Triangle(int, int, int);
	void SetSides(int, int, int);
	double GetArea();
	void ShowTriangle();
	void set_a(int);
	void set_b(int);
	void set_c(int);
	int get_a();
	int get_b();
	int get_c();
	~Triangle();
private:
	int a;
	int b;
	int c;
};

