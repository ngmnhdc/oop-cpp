#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon() {
	NumVertices = 0;
	Coordinate.resize(0);
}

Polygon::Polygon(int num) {
	NumVertices = num;
	Coordinate.resize(num);
}

Polygon::~Polygon() {}

void Polygon::SetNumVertices(int num) {
	NumVertices = num;
}

void Polygon::SetCoor(vector<Point> coor) {
	Coordinate = coor;
}

void Polygon::Input() {
	vector<Point> coor;
	coor.resize(GetNumVertices());
	do {
		for (int i = 0; i < GetNumVertices(); i++) {
			cout << "Coordinate " << i + 1 << ": (x, y) = ";
			cin >> coor[i].x;
			cin >> coor[i].y;
		}
		SetCoor(coor);
	} while (Check() == 0);
}

void Polygon::Display() {
	vector<Point> coor;
	coor = GetCoor();
	for (int i = 0; i < GetNumVertices(); i++) {
		cout << "(" << coor[i].x << ", " << coor[i].y << ")";
		if (i != GetNumVertices() - 1) {
			cout << "   ";
		}
	}
}
bool Polygon::Check() {
	vector<Point> coor;
	coor = GetCoor();
	for (int i = 0; i < GetNumVertices() - 1; i++) {
		for (int j = i + 1; j < GetNumVertices(); j++) {
			if (coor[i].x == coor[j].x && coor[i].y == coor[j].y) {
				cout << "Wrong Input! Please enter again.\n";
				return false;
			}
		}
	}
	return true;
}

void Polygon::Move(int x, int y) {
	vector<Point> coor;
	coor = GetCoor();
	for (int i = 0; i < GetNumVertices(); i++) {
		coor[i].x += x;
		coor[i].y += y;
	}
	SetCoor(coor);
}