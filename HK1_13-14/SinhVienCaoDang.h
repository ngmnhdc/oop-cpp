#pragma once
#include "SinhVien.h"

using namespace std;

class SinhVienCaoDang : public SinhVien
{
protected:
	float diemThi;
public:
	SinhVienCaoDang();
	~SinhVienCaoDang();
	void nhap();
	void xuat();
	bool xetTotNghiep();
};

