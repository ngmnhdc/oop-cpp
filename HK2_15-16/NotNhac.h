#pragma once
#include "KyHieu.h"

class NotNhac : public KyHieu
{
protected:
	int caoDo;
public:
	NotNhac();
	~NotNhac();
	void nhap();
	void xuat();
	int getCaoDo();
};

