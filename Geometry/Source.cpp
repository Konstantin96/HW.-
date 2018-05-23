#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

int main() {
	Circle A(12.5);
	cout << "area = " << A.area() << endl;
	Triangle B(0, 0, 5, 6, 7);
	cout << "area = " << B.area() << endl;
	Rectangle C(0, 0, 5, 2);
	cout << "area = " << C.area() << endl;
	system("pause");
	return 0;
}