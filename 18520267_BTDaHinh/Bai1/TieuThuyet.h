#pragma once
#include "Sach.h"
#include <string>

using namespace std;

class TieuThuyet : public Sach
{
protected:
	string theLoai;
public:
	TieuThuyet();
	~TieuThuyet();
	void nhap();
	void xuat();
};

