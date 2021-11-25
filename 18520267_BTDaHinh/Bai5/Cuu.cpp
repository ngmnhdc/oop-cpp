#include "Cuu.h"
#include "GiaSuc.h"
#include <random>
#include <iostream>

using namespace std;

Cuu::Cuu() {
	setSoCon(rand() % 10 + 1);
	setSoLitSua(rand() % 5 + 1);
	setTiengKeu(tiengKeu);
}

Cuu::~Cuu() {}

void Cuu::keu() {
	cout << tiengKeu << endl;
}

void Cuu::xuat() {
	cout << "Cuu ";
	GiaSuc::xuat();
}