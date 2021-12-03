#pragma once
#include "ThanhPhan.h"
#include <string>

using namespace std;

class Label : public ThanhPhan
{
protected:
	string noiDung;
	int mauChu;
	int mauNen;
public:
	Label();
	~Label();

	int getMauChu();
	int getMauNen();
	void nhap();
	//void xuat();
	bool isBoTucTrucTiep();
};

