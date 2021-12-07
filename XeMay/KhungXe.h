#pragma once
#include <string>

using namespace std;

class KhungXe
{
protected:
	string ma;
	int loai;
	int gia;
	string hangSX;
public:
	KhungXe();
	~KhungXe();

	int getGia() { return gia; };

	void nhap();
	void xuat();
	void luu();
};

