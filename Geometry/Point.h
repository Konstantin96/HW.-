#pragma once
#include "Libery.h"

class Point {
protected:
	double x;
	double y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(double a);
	Point(double x, double y);
	Point(const Point &p);
	virtual double area()=0;
	void move(double x, double y);
	virtual void rotate90() =0;
	void out_point();
	void set_point();
	void set_x(int _x) { x = _x; }
	void set_y(int _y) { y = _y; }

};