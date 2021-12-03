#pragma once
class ThanhPhan
{
protected:
	float hoanhDo;
	float tungDo;
	float chieuDai;
	float chieuRong;
	int type; // 0 - Label, 1 - Button
public:
	ThanhPhan();
	~ThanhPhan();

	int getType() { return type; };
	void setType(int _type);
	void nhap();
	//virtual void xuat() = 0;
};

