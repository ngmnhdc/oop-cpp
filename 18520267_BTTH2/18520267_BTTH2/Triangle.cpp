#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() {

}

Triangle::Triangle(int xA, int yA, int xB, int yB, int xC, int yC) {
	a.set(xA, yA);
	b.set(xB, yB);
	c.set(xC, yC);
}

Triangle::Triangle(Point _a, Point _b, Point _c) {
	a.set(_a);
	b.set(_b);
	c.set(_c);
}

Triangle::~Triangle() {

}

void Triangle::input() {
	cout << "\nNhap toa do 3 diem cua tam giac: " << endl;
	a.input();
	b.input();
	c.input();
}

void Triangle::display() {
	cout << "Toa do 3 diem cua tam giac la: " << endl;
	a.display();
	b.display();
	c.display();
}

void Triangle::move(int dx, int dy) {
	cout << "\nTinh tien tam giac theo vector (" << dx << "," << dy << ")" << endl;
	a.move(dx, dy);
	b.move(dx, dy);
	c.move(dx, dy);
}

void Triangle::rotate(float alpha) {
	cout << "\nPhep quay tam giac theo tam O goc " << alpha << endl;
	a.rotate(alpha);
	b.rotate(alpha);
	c.rotate(alpha);
}

void Triangle::zoom(float k) {
	cout << "\nPhong to, thu nho tam giac voi he so k = " << k << endl;
	a.zoom(k);
	b.zoom(k);
	c.zoom(k);
}