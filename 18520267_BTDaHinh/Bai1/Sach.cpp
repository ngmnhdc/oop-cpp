#include "Sach.h"
#include "iostream"

using namespace std;

Sach::Sach() {
	this->tenSach = "";
	this->soTrang = 0;
	this->giaTien = 0;
}

Sach::~Sach() {}

void Sach::nhap() {
	cout << "Nhap ten sach: ";
	cin.ignore();
	getline(cin, this->tenSach);
	cout << "Nhap so trang: ";
	cin >> this->soTrang;
	cout << "Nhap gia tien: ";
	cin >> this->giaTien;
}