#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

int main() {
	Point **p;
	p = new Point*[3];
	p[0] = new Rectangle(0, 0, 4, 6);
	p[1] = new Circle(1, 1, 5);
	p[2] = new Triangle(2, 2, 4, 5, 6);

	for (int i = 0; i < 3; i++)
		cout <<(*p[i]).nameGeo()<<" area = "<< (*p[i]).area() << endl;
	system("pause");
	return 0;
}