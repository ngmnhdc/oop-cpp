#pragma once
#include "Point.h"

class Polygon
{
private:
	int n;
	Point* p;
public:
	Polygon();
	Polygon(int n);
	~Polygon();

	void input();
	void display();
	void move(int dx, int dy);
	void rotate(float alpha);
	void zoom(float k);
};

