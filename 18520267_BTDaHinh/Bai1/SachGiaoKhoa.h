#pragma once
#include "Sach.h"
#include <string>

using namespace std;

class SachGiaoKhoa : public Sach
{
protected:
	int khoiLop;
public:
	SachGiaoKhoa();
	~SachGiaoKhoa();
	void nhap();
	void xuat();
};

