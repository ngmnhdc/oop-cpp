#pragma once
#include <string>

using namespace std;

class DoiTuong
{
protected:
	string ten;
	int capDo;
	float satThuong;
public:
	DoiTuong();
	~DoiTuong();

	void nhap();
	virtual void xuat() = 0;

	string getTen();
	int getSatThuong();
	void setSatThuong(float);
};

