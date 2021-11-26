#pragma once
#include <vector>
#include "SinhVien.h"

class DHCNTT
{
protected:
	vector<SinhVien*> dssv;
public:
	DHCNTT();
	~DHCNTT();
	void nhap();
	void xuat() const;
	void dsTotNghiep();
	float maxDTB();
	vector<SinhVien*> svMaxDTB();
};

