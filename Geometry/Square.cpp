#include "Square.h"

Square::Square(const Square & obj)
{
	this->a = obj.a;
	this->b = obj.b;
}

double Square::area()
{
	return a*b;
}

istream & operator >> (istream & is, Square obj)
{
	is >> obj.x >> obj.y >> obj.a >> obj.b;
	return is;
}

ostream & operator<<(ostream & os, Square obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.a << "\t" << obj.b << "\n";
	return os;
}