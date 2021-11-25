#include "GiaSuc.h"
#include "Bo.h"
#include <random>
#include <iostream>

using namespace std;

Bo::Bo() {
	setSoCon(rand() % 10 + 1);
	setSoLitSua(rand() % 20 + 1);
	setTiengKeu(tiengKeu);
}

Bo::~Bo(){}

void Bo::keu() {
	cout << tiengKeu << endl;
}

void Bo::xuat() {
	cout << "Bo ";
	GiaSuc::xuat();
}