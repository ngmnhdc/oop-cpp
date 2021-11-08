#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon() {
	this->n = 0;
	this->p = nullptr;
}

Polygon::Polygon(int n) {
	this->n = n;
	this->p = new Point[n];
}

Polygon::~Polygon() {
	delete[] p;
}

void Polygon::input() {
	for (int i = 0; i < n; i++) {
		cout << "Nhap toa do dinh thu " << i + 1 << endl;
		p[i].input();
	}
}

void Polygon::display() {
	cout << "Toa do cac dinh cua da giac la: " << endl;
	for (int i = 0; i < n; i++) {
		p[i].display();
	}
}

void Polygon::move(int dx, int dy) {
	cout << "\nTinh tien da giac theo vector (" << dx << "," << dy << ")" << endl;
	for (int i = 0; i < n; i++) {
		p[i].move(dx, dy);
	}
}

void Polygon::rotate(float alpha) {
	cout << "\nPhep quay da giac theo tam O goc " << alpha << endl;
	for (int i = 0; i < n; i++) {
		p[i].rotate(alpha);
	}
}

void Polygon::zoom(float k) {
	cout << "\nPhong to, thu nho da giac voi he so k = " << k << endl;
	for (int i = 0; i < n; i++) {
		p[i].zoom(k);
	}
}