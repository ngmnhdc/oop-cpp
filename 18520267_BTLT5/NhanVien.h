#pragma once
#include <string>
class NhanVien
{
private:
	char hoten[30];
	char ngaysinh[11];
public:
	NhanVien();
	~NhanVien();
	void Nhap();
	void Xuat();
	long TinhLuong();
};

