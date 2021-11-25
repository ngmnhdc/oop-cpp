#include "GiaSuc.h"
#include <string>
#include <iostream>

using namespace std;

GiaSuc::GiaSuc() {
	this->setSoCon(0);
    this->setSoLitSua(0);
    this->setTiengKeu("");
}

GiaSuc::~GiaSuc() {}

void GiaSuc::setSoCon(int _soCon) {
    soCon = _soCon;
}
void GiaSuc::setSoLitSua(int _soLitSua) {
    soLitSua = _soLitSua;
}
void GiaSuc::setTiengKeu(string _tiengKeu) {
    tiengKeu = _tiengKeu;
}

void GiaSuc::xuat() {
    cout << "sinh " << soCon << " con va cho " << soLitSua << " lit sua.\n";
}