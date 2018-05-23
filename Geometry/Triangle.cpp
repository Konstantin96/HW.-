#include "Triangle.h"

void Triangle::rotate90()
{
	swap(a, b);
	swap(b, c);
	swap(c, a);
}

double Triangle::area()
{
	double P = (a + b + c) / 2;
	double s = sqrt(P*(P - a)*(P - b)*(P - c));
	return s;
}

Triangle::Triangle(const Triangle & obj)
{
	this->a = obj.a;
	this->b = obj.b;
	this->c = obj.c;
}

istream & operator >> (istream & is, Triangle obj)
{
	is >> obj.x >> obj.y >> obj.a >> obj.b>>obj.c;
	return is;
}

ostream & operator<<(ostream & os, Triangle obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.a <<"\t"<< obj.b<<"\t"<<obj.c << "\n";
	return os;
}
