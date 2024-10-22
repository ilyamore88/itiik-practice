#include <iostream>
#include <math.h>

using namespace std;

double findTrianArea(double triagDist[3])
{
	double p = (triagDist[0] + triagDist[1] + triagDist[2]) / 2;
	return sqrt(p*(p - triagDist[0])*(p - triagDist[1])*(p - triagDist[2]));
}

double findDistance(int dot1[2], int dot2[2])
{
	return sqrt(pow(dot2[0] - dot1[0], 2) + pow(dot2[1] - dot1[1], 2));
}

double findArea(int dots[5][2]) 
{
	double triangle1[3];
	double triangle2[3];
	double triangle3[3];
	triangle1[0] = findDistance(dots[0], dots[1]);
	triangle1[1] = findDistance(dots[1], dots[2]);
	triangle1[2] = findDistance(dots[0], dots[2]);
	triangle2[0] = findDistance(dots[0], dots[2]);
	triangle2[1] = findDistance(dots[2], dots[3]);
	triangle2[2] = findDistance(dots[0], dots[3]);
	triangle3[0] = findDistance(dots[0], dots[3]);
	triangle3[1] = findDistance(dots[3], dots[4]);
	triangle3[2] = findDistance(dots[0], dots[4]);
	return findTrianArea(triangle1) + findTrianArea(triangle2) + findTrianArea(triangle3);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int dots[5][2];
	cout << "Введите координаты вершин пятиугольника (x, y)" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "x" << i << ": ";
		cin >> dots[i][0];
		cout << "y" << i << ": ";
		cin >> dots[i][1];
	}
	cout << "Площадь пятиугольника: " << findArea(dots) << endl;
	system("pause");
	return 0;
}
