#include "TapChi.h"
#include "iostream"

using namespace std;

TapChi::TapChi() {
	this->tenSach = "";
	this->soTrang = 0;
	this->giaTien = 0;
}

TapChi::~TapChi() {}

void TapChi::nhap() {
	Sach::nhap();
	cout << "Nhap ky phat hanh: ";
	cin.ignore();
	getline(cin, this->kyPhatHanh);
}

void TapChi::xuat() {
	(this->tenSach.length() < 8) 
		? cout << this->tenSach << "\t\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->kyPhatHanh << endl
		: cout << this->tenSach << "\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->kyPhatHanh << endl;
}