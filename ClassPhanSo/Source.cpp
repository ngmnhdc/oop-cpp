#include <iostream>
#include "PhanSo.h"

int	main() {
	PhanSo a,b;
	PhanSo c;
	cin >> a;
	cin >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// Kiem tra cac operator ==, >, <, >=, <=
	if (a == b) {
		cout << "a bang (=) b" << endl;
	}
	if (a > b) {
		cout << "a lon hon (>) b" << endl;
	}
	if (a >= b) {
		cout << "a lon hon hoac bang (>=) b" << endl;
	}
	if (a < b) {
		cout << "a nho hon (<) b" << endl;
	}
	if (a <= b) {
		cout << "a nho hon hoac bang (<=) b" << endl;
	}

	// Kiem tra operator +, - , *, /
	cout << "Ket qua cong hai phan so bang: ";
	c = a + b;
	c.Xuat();

	cout << "Ket qua tru hai phan so bang: ";
	c = a - b;
	c.Xuat();

	cout << "Ket qua nhan hai phan so bang: ";
	c = a * b;
	c.Xuat();

	cout << "Ket qua chia hai phan so bang: ";
	c = a / b;
	c.Xuat();

	return 0;
}