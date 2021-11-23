#include <iostream>
#include "Rectangle.h"
#include "Parallelogram.cpp"

using namespace std;

Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}

void Rectangle::Input() {
	Quadrangle::Input();
}

void Rectangle::Display() {
	cout << "\nRectangle: ";
	Polygon::Display();
}

bool Rectangle::Check() {
	Point YAxis = { 0,1 };
	Point XAxis = { 1,0 };
	vector<Point> c = GetCoor();
	vector<double> Xvalue;
	vector<double> Yvalue;
	Xvalue.resize(0);
	Yvalue.resize(0);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (MultiCoor(VectorCoor(c[i], c[j]), YAxis) == 0) {
				Xvalue.push_back(Module(c[i], c[j]));
			}
			else if (MultiCoor(VectorCoor(c[i], c[j]), XAxis) == 0) {
				Yvalue.push_back(Module(c[i], c[j]));
			}
			else {
			}
		}
	}
	if (Xvalue.size() == Yvalue.size()) {
		return true;
	}
	else {
		cout << "Wrong input!Again.\n";
		return false;
	}
}