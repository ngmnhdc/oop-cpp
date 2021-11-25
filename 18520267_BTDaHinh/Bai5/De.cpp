#include "De.h"
#include "GiaSuc.h"
#include <random>
#include <iostream>

using namespace std;

De::De() {
	setSoCon(rand() % 10 + 1);
	setSoLitSua(rand() % 20 + 1);
	setTiengKeu(tiengKeu);
}

De::~De() {}

void De::keu() {
	cout << tiengKeu << endl;
}

void De::xuat() {
	cout << "De ";
	GiaSuc::xuat();
}