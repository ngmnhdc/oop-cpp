#pragma once
#include <string>

using namespace std;

class DongCo
{
protected:
	string ma;
	int loai;
	int gia;
	string hangSX;
public:
	DongCo();
	~DongCo();
	
	string getMa() { return ma; };
	int getLoai() { return loai; };
	int getGia() { return gia; };
	string getHangSX() { return hangSX; };

	void setGia(int);

	virtual void nhap()=0;
	virtual void xuat()=0;
	virtual void luu()=0;
};

