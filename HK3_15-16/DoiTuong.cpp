#include "DoiTuong.h"
#include <iostream>

using namespace std;

DoiTuong::DoiTuong() {
	ten = "";
	capDo = 1;
	setSatThuong(0);
}

DoiTuong::~DoiTuong() {}

string DoiTuong::getTen() {
	return ten;
}

int DoiTuong::getSatThuong() {
	return satThuong;
}

void DoiTuong::setSatThuong(float _satThuong) {
	satThuong = _satThuong;
}

void DoiTuong::nhap() {
	cout << "  Nhap ten: ";
	cin.ignore();
	getline(cin, ten);
	cout << "  Nhap cap do: ";
	cin >> capDo;
}