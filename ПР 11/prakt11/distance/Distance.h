#pragma once
class Distance
{
private:
	int feet;
	float inches;
	const float MTF = 3.280833f;
public:
	Distance();
	Distance(int, float);
	Distance(float);
	void getdist();
	void showdist();
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
	operator float() const;
};

