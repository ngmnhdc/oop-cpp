#include <iostream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

void main() {
	
	int _n;
	cout << "Nhap so phan tu cua vector a: "; 
	cin >> _n;
	Vector a(_n);
	cout << "Nhap vector a: " << endl;
	cin >> a;
	cout << "\nNhap so phan tu cua vector b: "; 
	cin >> _n;
	Vector b(_n);
	cout << "Nhap vector b: " << endl;
	cin >> b;
	cout << "\nVector a: " << a << endl;
	cout << "Vector b: " << b << endl;
	if (a.checkSize(b) == 1) {
		cout << "\nVector a + b = ";
		(a + b).display();
	} else cout << "Khong the cong hai vecto nay";
	
	Matrix m(2, 2), n(2, 2), p(2,2);

	m[0][0] = 1;
	m[0][1] = 2;
	m[1][0] = 3;
	m[1][1] = 4;

	n[0][0] = 5;
	n[0][1] = 6;
	n[1][0] = 7;
	n[1][1] = 8;

	cout << "\nMatrix M: \n" << m << endl;
	cout << "Matrix N: \n" << n << endl;
	p = m * n;
	cout <<"Matrix P = M x N: \n" << p << endl;
}