#include <iostream>
#include "SoPhuc.h"
using namespace std;

void main() {
	SoPhuc a, b, res;
	cout << "Nhap so phuc a" << endl;
	a.Nhap();
	cout << "Nhap so phuc b" << endl;
	b.Nhap();
	cout << "\na = ";
	a.Xuat();
	cout << "b = ";
	b.Xuat();
	cout << "\na + b = ";
	res = a + b;
	res.Xuat();
	cout << "a - b = ";
	res = a - b;
	res.Xuat();
	cout << "a * b = ";
	res = a * b;
	res.Xuat();
	cout << "a / b = ";
	res = a / b;
	res.Xuat();
	cout << "\n";
	if (a == b) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}
}