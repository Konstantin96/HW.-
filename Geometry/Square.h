#pragma once
#include "Point.h"

class Square :public Point
{
private:
	double a;
	double b;
public:
	Square() = default;
	Square(const Square& obj);
	double area();
	void rotate90() {}
	friend istream& operator >> (istream &is, Square obj);
	friend ostream& operator << (ostream &os, Square obj);

};