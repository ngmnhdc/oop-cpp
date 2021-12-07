#pragma once
#include <string>
#include <vector>
#include "DongCo.h"
#include "BanhXe.h"
#include "KhungXe.h"

class XeMay
{
private:
	string ma;
	int gia;
	vector<DongCo*> dc;
	vector<BanhXe*> bx;
	vector<KhungXe*> kx;
public:
	XeMay();
	~XeMay();

	void setGia();
	void nhap();
	void xuat();
	void luu();
};

