#include "DaThuc.h"
#include <iostream>

using namespace std;

DaThuc::DaThuc() {
	this->n = 0;
	this->dt = nullptr;
}

DaThuc::DaThuc(int _n) {
	this->n = _n;
	this->dt = new int[n+1];
}

DaThuc::~DaThuc() {
	delete[] dt;
}


istream& operator>> (istream& is, DaThuc& dt) {
	do {
		cout << "Nhap bac cua da thuc: ";
		is >> dt.n;
	} while (dt.n < 3);
	cout << "Nhap cac he so cua da thuc " << endl;
	dt.dt = new int[dt.n + 1];
	for (int i = 0; i < dt.n; i++) {
		cout << "He so bac " << i << ": ";
		is >> dt.dt[i];
	}
	return is;
}

ostream& operator<< (ostream& os, DaThuc& dt) {
	// Xuat so hang bac n
	dt.dt[dt.n - 1] < 0
		? os << "- " << dt.dt[dt.n - 1] * -1 << "x^" << dt.n - 1
		: os << dt.dt[dt.n - 1] << "x^" << dt.n - 1;
	// Xuat so hang bac n-1 -> bac 2
	if (dt.n >= 4) {
		for (int i = dt.n - 2; i >= 2; i--)
		{
			dt.dt[i] < 0
				? os << " - " << dt.dt[i] * -1 << "x^" << i
				: os << " + " << dt.dt[i] << "x^" << i;
		}
	}
	// Xuat so hang bac 1
	dt.dt[1] < 0
		? os << " - " << dt.dt[1] * -1 << "x"
		: os << " + " << dt.dt[1] << "x";
	// Xuat so hang bac 0
	dt.dt[0] < 0
		? os << " - " << dt.dt[0] * -1
		: os << " + " << dt.dt[0] << endl;
	return os;
}

const DaThuc& DaThuc::operator=(const DaThuc& p)
{
	if (this->n != p.n)
	{
		delete[] this->dt;
		this->n = p.n;
		this->dt = new int[n + 1];
	}
	for (int i = 0; i <= n; i++)
		this->dt[i] = p.dt[i];
	return (*this);
}

DaThuc DaThuc::operator+(DaThuc& d)
{
	int nmax = (n > d.n) ? n : d.n;
	int nmin = (n < d.n) ? n : d.n;
	DaThuc sum(nmax);
	for (int i = nmax; i > nmin; i--) sum.dt[i] = (n == nmax) ? dt[i] : d.dt[i];
	for (int i = 0; i <= nmin; i++) sum.dt[i] = dt[i] + d.dt[i];
	return sum;
}
DaThuc DaThuc::operator-(DaThuc& d)
{
	int nmax = (n > d.n) ? n : d.n;
	int nmin = (n < d.n) ? n : d.n;
	DaThuc sub(nmax);
	for (int i = 0; i <= nmin; i++) sub.dt[i] = dt[i] - d.dt[i];
	for (int i = nmax; i > nmin; i--) sub.dt[i] = (n == nmax) ? dt[i] : d.dt[i];
	return sub;
}