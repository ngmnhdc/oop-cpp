#pragma once
#include "GiaSuc.h"
#include <string>

using namespace std;

class De : public GiaSuc
{
private:
	const string tiengKeu = "GoatGoatGoat";
public:
	De();
	~De();

	void keu();
	void xuat();
};



