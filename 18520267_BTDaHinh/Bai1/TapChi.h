#pragma once
#include "Sach.h"
#include <string>
using namespace std;

class TapChi : public Sach
{
protected:
	string kyPhatHanh;
public:
	TapChi();
	~TapChi();
	void nhap();
	void xuat();
};

