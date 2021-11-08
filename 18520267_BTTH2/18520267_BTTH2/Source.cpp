#include "Point.h"
#include "Triangle.h"
#include "Polygon.h"
#include <iostream>

using namespace std;

void main() {
	Point p1, p2(3, 4), p3(2);
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

	Triangle t;
	t.input();
	t.display();
	// Tinh tien tam giac theo vetor (1,2)
	t.move(1, 2);
	t.display();
	// Phong to tam giac voi he so k=2
	t.zoom(2);
	t.display();
	//Quay tam giac theo tam O goc alpha=45
	t.rotate(45);
	t.display();

	int n;
	do {
		cout << "\nNhap so dinh cua da giac: ";
		cin >> n;
	} while (n < 3);
	Polygon p(n);
	p.input();
	p.display();
	// Tinh tien da giac theo vetor (1,2)
	p.move(1, 2);
	p.display();
	// Phong to da giac voi he so k=2
	p.zoom(2);
	p.display();
	//Quay da giac theo tam O goc alpha=90
	p.rotate(90);
	p.display();
}