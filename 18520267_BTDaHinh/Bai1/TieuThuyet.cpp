#include "TieuThuyet.h"
#include "iostream"

using namespace std;

TieuThuyet::TieuThuyet() {
	this->tenSach = "";
	this->soTrang = 0;
	this->giaTien = 0;
	this->theLoai = "";
}

TieuThuyet::~TieuThuyet() {}

void TieuThuyet::nhap() {
	Sach::nhap();
	cout << "Nhap the loai: ";
	cin.ignore();
	getline(cin, this->theLoai);
}

void TieuThuyet::xuat() {
	(this->tenSach.length() < 8)
		? cout << this->tenSach << "\t\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->theLoai << endl
		: cout << this->tenSach << "\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->theLoai << endl;
}