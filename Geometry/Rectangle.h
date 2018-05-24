#pragma once
#include "Point.h"

class Rectangle:public Point
{
private:
	double a;
	double b;
public:
	Rectangle() = default;
	Rectangle(double x, double y, double a, double b) :Point(x, y), a(a), b(b){}
	double area();
	void rotate90();
	string nameGeo() {
		string _rectangle = "Rectangle";
		return _rectangle;
	}
	Rectangle(const Rectangle& obj);
	friend istream& operator >> (istream &is, Rectangle obj);
	friend ostream& operator << (ostream &os, Rectangle obj);
	 bool operator ==(Rectangle obj);
};