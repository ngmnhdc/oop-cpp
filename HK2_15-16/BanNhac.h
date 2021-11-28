#pragma once
#include <vector>
#include "KyHieu.h"
#include "NotNhac.h"

using namespace std;

class BanNhac
{
private:
	vector<KyHieu*> dskh;
public:
	BanNhac();
	~BanNhac();

	void nhap();
	void xuat();
	int demNotLangDen();
	void timNotCaoNhat();
};

