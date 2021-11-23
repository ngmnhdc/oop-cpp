#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() {
	SetNumVertices(Vertices);
}

Triangle::~Triangle() {}

void Triangle::Input() {
	Polygon::Input();
}

void Triangle::Display() {
	cout << "\nTriangle: ";
	Polygon::Display();
}