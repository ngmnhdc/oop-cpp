#include "SachGiaoKhoa.h"
#include "iostream"

using namespace std;

SachGiaoKhoa::SachGiaoKhoa() {
	this->tenSach = "";
	this->soTrang = 0;
	this->giaTien = 0;
	this->khoiLop = 0;
}

SachGiaoKhoa::~SachGiaoKhoa() {}

void SachGiaoKhoa::nhap() {
	Sach::nhap();
	cout << "Nhap khoi lop: ";
	cin >> this->khoiLop;
}

void SachGiaoKhoa::xuat() {
	(this->tenSach.length() < 8)
		? cout << this->tenSach << "\t\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->khoiLop << endl
		: cout << this->tenSach << "\t" << this->soTrang << "\t\t" << this->giaTien << "\t\t" << this->khoiLop << endl;
}