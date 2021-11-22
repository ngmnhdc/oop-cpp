#pragma once
#include <string>
using namespace std;
class Sach
{
protected:
	string tenSach;
	int soTrang;
	int giaTien;
public:
	Sach();
	~Sach();
	void nhap();
	virtual void xuat() = 0;
};

