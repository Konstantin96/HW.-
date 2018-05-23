#include "Circle.h"

Circle::Circle(double R)
{
	this->R = R;
}

void Circle::set_radius(double R)
{
	this->R = R;
}

double Circle::get_radius()
{
	return R;
}

double Circle::area()
{
	return 3.14*R*R;
}

istream & operator >> (istream & is, Circle obj)
{
	is >> obj.x >> obj.y >> obj.R;
	return is;
}

ostream & operator<<(ostream & os, Circle obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.R<< "\n";
	return os;
}
