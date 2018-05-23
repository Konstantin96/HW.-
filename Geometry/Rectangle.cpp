#include "Rectangle.h"

double Rectangle::area()
{
	return a*b;
}

void Rectangle::rotate90()
{
	swap(a, b);
}

Rectangle::Rectangle(const Rectangle & obj)
{
	this->a = obj.a;
	this->b = obj.b;
}

istream & operator >> (istream & is, Rectangle obj)
{
	is >> obj.x >> obj.y >> obj.a >> obj.b;
	return is;
}

ostream & operator<<(ostream & os, Rectangle obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.a << "\t" << obj.b << "\n";
	return os;
}
