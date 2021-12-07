#pragma once
#include <string>

using namespace std;

class BanhXe
{
protected:
	string ma;
	int loai;
	int gia;
	string hangSX;
public:
	BanhXe();
	~BanhXe();

	int getGia() { return gia; };

	void nhap(int);
	void xuat(int);
	void luu(int);
};

