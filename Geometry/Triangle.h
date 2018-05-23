#pragma once
#include "Point.h"

class Triangle :public Point
{
private:
	double a;
	double b;
	double c;
public:
	Triangle()=default;
	Triangle(double x, double y, double a, double b, double c) :Point(x, y) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void rotate90();
	double area();
	Triangle(const Triangle& obj);
	friend istream& operator >> (istream &is, Triangle obj);
	friend ostream& operator << (ostream &os, Triangle obj);

};

