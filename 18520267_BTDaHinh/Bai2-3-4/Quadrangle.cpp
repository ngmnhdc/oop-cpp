#include "Quadrangle.h"
#include <iostream>

using namespace std;

Quadrangle::Quadrangle() {
	SetNumVertices(Vertices);
}

Quadrangle::~Quadrangle() {}

void Quadrangle::Input() {
	Polygon::Input();
}

void Quadrangle::Display() {
	cout << "\nQuadrangle: ";
	Polygon::Display();
}