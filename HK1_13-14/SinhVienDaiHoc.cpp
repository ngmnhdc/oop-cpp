#include "SinhVien.h"
#include "SinhVienDaiHoc.h"
#include <iostream>

using namespace std;

SinhVienDaiHoc::SinhVienDaiHoc() {
	this->kieuSV = 1;
	this->tenLuanVan = "";
	this->diemLuanVan = 0;
}

SinhVienDaiHoc::~SinhVienDaiHoc() {}

void SinhVienDaiHoc::nhap() {
	SinhVien::nhap();
	cout << "Nhap ten luan van: ";
	cin.ignore();
	getline(cin, tenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> diemLuanVan;
}

void SinhVienDaiHoc::xuat() {
	SinhVien::xuat();
	cout << tenLuanVan << "\t" << diemLuanVan;
}

bool SinhVienDaiHoc::xetTotNghiep() {
	return soTinChi >= 170 && dtb >= 5 && diemLuanVan >= 5;
}