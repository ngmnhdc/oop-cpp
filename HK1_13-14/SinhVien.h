#pragma once
#include <string>

using namespace std;

class SinhVien
{
protected:
	string mssv;
	string hoTen;
	string diaChi;
	int soTinChi;
	float dtb;
	int kieuSV;
public:
	SinhVien();
	~SinhVien();
	void nhap();
	void xuat();
	virtual bool xetTotNghiep() = 0;
	int getKieuSV() { return this->kieuSV; }
	float getDiemTB() { return this->dtb; }
};

