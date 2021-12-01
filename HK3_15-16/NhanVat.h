#pragma once
#include "DoiTuong.h"

class NhanVat : public DoiTuong
{
protected:
	int monPhai; // 0 ->
	int he;
public:
	NhanVat();
	~NhanVat();

	void nhap();
	void xuat();

	int getHe();
	void setHe(int);
};

