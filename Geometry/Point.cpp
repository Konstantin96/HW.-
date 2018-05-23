#include "Point.h"

Point::Point(double a)
{
	x = a;
	y = a;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point &p)
{
	this->x = p.x;
	this->y = p.y;
}

void Point::move(double x, double y)
{
	this->x += x;
	this->y += y;
}

void Point::out_point()
{
	cout << "x: " << x << endl<< "y: " << y << endl;
}

void Point::set_point()
{
	std::cout << "x-> "; std::cin >> x;
	std::cout << "y-> "; std::cin >> y;
}

