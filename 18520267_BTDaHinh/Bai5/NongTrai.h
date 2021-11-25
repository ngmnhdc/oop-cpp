#pragma once
#include <vector>
#include "GiaSuc.h"

using namespace std;

class NongTrai
{
private:
	vector<vector<GiaSuc*>> List;
public:
	NongTrai();
	~NongTrai();

	void nhap();
	void xuatTiengKeu();
	void thongKe();
};

