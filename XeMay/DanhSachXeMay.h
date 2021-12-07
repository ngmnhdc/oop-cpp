#pragma once
#include <vector>
#include "XeMay.h"

using namespace std;

class DanhSachXeMay
{
private:
	int sl;
	vector<XeMay*> ds;
public:
	DanhSachXeMay();
	~DanhSachXeMay();
	void nhap();
	void xuat();
	void luu();
};

