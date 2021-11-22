#pragma once
#include <vector>
#include "Sach.h";

using namespace std;

class DanhSachSach
{
private:
	vector<Sach*> ds;
public:
	DanhSachSach();
	~DanhSachSach();
	void nhap();
	void xuat();
};

