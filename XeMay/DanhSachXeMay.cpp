#include "DanhSachXeMay.h"
#include <iostream>

DanhSachXeMay::DanhSachXeMay() {
	sl = 0;
	ds.resize(0);
}

DanhSachXeMay::~DanhSachXeMay() {}

void DanhSachXeMay::nhap() {
	cout << "Nhap so luong xe: ";
	cin >> sl;
	for (int i = 0; i < sl; i++)
	{
		XeMay* xe = new XeMay();
		xe->nhap();
		ds.push_back(xe);
	}
}

void DanhSachXeMay::xuat() {
	for (int i = 0; i < ds.size(); i++)
		ds[i]->xuat();
}

void DanhSachXeMay::luu() {
	for (int i = 0; i < ds.size(); i++)
		ds[i]->luu();
}