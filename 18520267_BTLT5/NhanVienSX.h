#pragma once
#include "NhanVien.h"

class NhanVienSX : public NhanVien
{
private:
	long luongcb;
	int sosp;
public:
	NhanVienSX();
	~NhanVienSX();
	void Nhap();
	void Xuat();
	long TinhLuong();
};

