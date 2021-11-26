#pragma once
#include "SinhVien.h"

using namespace std;

class SinhVienDaiHoc : public SinhVien
{
protected:
	string tenLuanVan;
	float diemLuanVan;
public:
	SinhVienDaiHoc();
	~SinhVienDaiHoc();
	void nhap();
	void xuat();
	bool xetTotNghiep();
};

