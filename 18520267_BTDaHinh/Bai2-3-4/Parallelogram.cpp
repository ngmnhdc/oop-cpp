#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram() {}
Parallelogram::~Parallelogram() {}

void Parallelogram::Input() {
	Quadrangle::Input();
}

void Parallelogram::Display() {
	cout << "Parallelogram: ";
	Polygon::Display();
}

double MultiCoor(Point c1, Point c2) {
	return c1.x * c2.x + c1.y * c2.y;
}

double Module(Point c1, Point c2) {
	return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

Point VectorCoor(Point c1, Point c2) {
	Point c;
	c.x = c1.x - c2.x;
	c.y = c1.y - c2.y;
	return c;
}

bool Parallelogram::Check() {
	Point YAxis = { 0,1 };
	vector<Point> c = GetCoor();
	vector<double> value;
	value.resize(0);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (MultiCoor(VectorCoor(c[i], c[j]), YAxis) == 0) {
				value.push_back(Module(c[i], c[j]));
			}

		}
	}
	if (value.size() == 2 && value[0] == value[1]) {
		return true;
	}
	else {
		cout << "Wrong input! Please enter again.\n";
		return false;
	}
}