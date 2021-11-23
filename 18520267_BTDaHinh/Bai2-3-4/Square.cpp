#include <iostream>
#include "Square.h"
#include "Parallelogram.cpp"

using namespace std;

Square::Square() {}
Square::~Square() {}

void Square::Input() {
	Quadrangle::Input();
}

void Square::Display() {
	cout << "\nSquare: ";
	Polygon::Display();
}

bool Square::Check() {
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
	if (Xvalue.size() == Yvalue.size() && Xvalue[0] == Yvalue[0]) {
		return true;
	}
	else {
		cout << "Wrong input! Please enter again.\n";
		return false;
	}
}