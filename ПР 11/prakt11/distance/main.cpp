#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Distance dist1 = 2.35f;
	Distance dist2;
	dist2.getdist();
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist2;
	dist2++;
	dist2.showdist();

	cout << "meters = " << mtrs << endl;

	system("pause");
	return 0;
}