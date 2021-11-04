#include "Point.h"
#include <iostream>

using namespace std;

void main() {
	Point p1, p2(2, 3), p3(p2);

	cout << "Nhap toa do diem p1" << endl;
	p1.input();
	cout << "\nToa do cac diem" << endl;
	cout << "p1: ";
	p1.display();
	cout << "p2: ";
	p2.display();
	cout << "p3: ";
	p3.display();

	cout << "\nDi chuyen diem p2" << endl;
	p2.move(1, 1);
	p2.display();

	cout << "\nXuat hoanh do tung do diem p3" << endl;
	p3.getX();
	p3.getY();
}