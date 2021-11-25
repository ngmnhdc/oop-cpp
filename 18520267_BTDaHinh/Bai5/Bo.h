#pragma once
#include "GiaSuc.h"
#include <string>

using namespace std;

class Bo : public GiaSuc
{
private:
	const string tiengKeu = "CowCowCow";
public:
	Bo();
	~Bo();

	void keu();
	void xuat();
};

