#pragma once
#include "DoiTuong.h"

class QuaiVat : public DoiTuong
{
protected:
	int loai;
	int he; // 0 -> 4
public:
	QuaiVat();
	~QuaiVat();

	void nhap();
	void xuat();
	int getHe();
};

