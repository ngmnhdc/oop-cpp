#pragma once
#include "NhanVien.h"

class NhanVienVP : public NhanVien
{
private:
	long songay;
public:
	NhanVienVP();
	~NhanVienVP();
	void Nhap();
	void Xuat();
	long TinhLuong();
};
