#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{
	n = 0;
	v = NULL;
}

Vector::Vector(int size)
{
	n = size;
	v = new float[n];
}

Vector::Vector(Vector& a)
{
	n = a.n;
	v = new float[n];
	for (int i = 0; i < n; i++)
		v[i] = a.v[i];
}

Vector::~Vector()
{
	delete[] v;
}

bool Vector::checkSize(Vector& b)
{
	if (n == b.n)
		return 1;
	return 0;
}

istream& operator>>(istream& is, Vector& a)
{
	for (int i = 0; i < a.n; i++)
	{
		cout << "v[" << i << "]: ";
		is >> a.v[i];
	}
	return is;
}

ostream& operator<<(ostream& os, Vector& a)
{
	for (int i = 0; i < a.n; i++)
		os << "  " << a.v[i];
	return os;
}

void Vector::operator=(Vector& a)
{
	n = a.n;
	v = new float[n];
	for (int i = 0; i < n; i++)
		v[i] = a.v[i];
}

Vector operator+(Vector& a, Vector& b)
{
	Vector c = a;
	for (int i = 0; i < a.n; i++)
		c.v[i] = a.v[i] + b.v[i];
	return c;
}

void Vector::display()
{
	int i;
	for (i = 0; i < n; i++)
		cout << v[i] << "  ";
	cout << "\n";
}