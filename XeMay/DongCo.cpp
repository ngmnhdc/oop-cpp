#include "DongCo.h"
#include <iostream>

using namespace std;

DongCo::DongCo(){
	ma = "";
	loai = 0;
	gia = 0;
	hangSX = "";
}

DongCo::~DongCo(){}

void DongCo::setGia(int _gia) {
	gia = _gia;
}