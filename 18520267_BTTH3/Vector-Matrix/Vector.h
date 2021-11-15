#pragma once
#include <istream>
#include <ostream>

using namespace std;

class Vector
{
private:
	int n;
	float* v;
public:
	Vector();
	Vector(int size);
	Vector(Vector& a);
	~Vector();
	/*void input();*/
	void display();
	bool checkSize(Vector& a);
	void operator=(Vector& a);
	friend Vector operator+(Vector& a, Vector& b);
	friend istream& operator>>(istream& is, Vector& a);
	friend ostream& operator<<(ostream& os, Vector& a);
};

