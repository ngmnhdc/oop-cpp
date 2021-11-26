#include "SinhVien.h"
#include "SinhVienCaoDang.h"
#include <iostream>

using namespace std;

SinhVienCaoDang::SinhVienCaoDang() {
	this->diemThi = 0;
}

SinhVienCaoDang::~SinhVienCaoDang() {}

void SinhVienCaoDang::nhap() {
	SinhVien::nhap();
	cout << "Nhap diem thi tot nghiep: ";
	cin >> diemThi;
}

void SinhVienCaoDang::xuat() {
	SinhVien::xuat();
	cout << diemThi;
}

bool SinhVienCaoDang::xetTotNghiep() {
	return soTinChi >= 120 && dtb >= 5 && diemThi >= 5;
}