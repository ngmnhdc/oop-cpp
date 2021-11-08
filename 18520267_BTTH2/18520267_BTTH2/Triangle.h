#pragma once
#include <iostream>
#include "Point.h"

class Triangle
{
private:
	Point a, b, c;
public:
	Triangle();
	Triangle(int xA, int yA, int xB, int yB, int xC, int yC);
	Triangle(Point a, Point b, Point c);
	~Triangle();

	void input();
	void display();
	void move(int dx, int dy);
	void rotate(float alpha);
	void zoom(float k);
};

