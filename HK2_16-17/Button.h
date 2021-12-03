#pragma once
#include "Label.h"
#include <string>

using namespace std;

class Button : public Label
{
protected:
	string hinhAnh;
public:
	Button();
	~Button();

	void nhap();
	//void xuat();
};



