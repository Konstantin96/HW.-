#pragma once
#include "Point.h"

class Circle:public Point
{
private:
	double R;
public:
	Circle() = default;
	Circle(double x, double y, double R) :Point(x, y), R(R){}
	Circle(double R);
	void set_radius(double R);
	double get_radius();
	double area();
	void rotate90(){}
	friend istream& operator >> (istream &is, Circle obj);
	friend ostream& operator << (ostream &os, Circle obj);
};
