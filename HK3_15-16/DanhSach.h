#pragma once
#include "DoiTuong.h"
#include "NhanVat.h"
#include "QuaiVat.h"
#include <iostream>
#include <vector>

using namespace std;

class DanhSach
{
protected:
	vector<DoiTuong*> ds;
public:
	DanhSach();
	~DanhSach();

	void nhap();
	void xuat();
	void maxSatThuong();

	bool isTuongSinh(int, int);
	bool isTuongKhac(int, int);
	void gaySatThuong();
};

