#pragma once
#include <string>
using namespace std;

const string dsCaoDo[] = {
	"C",
	"D",
	"E",
	"F",
	"G",
	"A",
	"B"
};

const string dsTruongDo[] = {
	"4",
	"2",
	"1",
	"1/2",
	"1/4",
	"1/8",
	"1/16"
};

class KyHieu
{
protected:
	int truongDo;
	int type; // 0 - Not nhac, 1 - Dau lang
public:
	KyHieu();
	~KyHieu();
	void setType(int _type);
	int getType();
	int getTruongDo();
	virtual void nhap()=0;
	virtual void xuat()=0;
};

