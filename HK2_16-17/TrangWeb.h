#pragma once
#include "ThanhPhan.h"
#include <vector>

using namespace std;

class TrangWeb
{
private:
	vector<ThanhPhan*> ds;
public:
	TrangWeb();
	~TrangWeb();

	void nhap();
	void isBoTucTrucTiep();
	void kiemTraPhoiMau();
};

