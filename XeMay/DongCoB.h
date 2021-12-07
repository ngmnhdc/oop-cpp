#pragma once
#include "DongCo.h"

class DongCoB : public DongCo
{
private:
	int tieuChuan;
public:
	DongCoB();
	~DongCoB();

	void nhap();
	void xuat();
	void luu();
};

