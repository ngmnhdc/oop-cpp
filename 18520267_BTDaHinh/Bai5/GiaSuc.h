#pragma once
#include<string>

using namespace std;

class GiaSuc
{
protected:
	int soCon;
	int soLitSua;
	string tiengKeu;
public:
	GiaSuc();
	~GiaSuc();

	int getSoCon() { return soCon; };
	int getSoLitSua() { return soLitSua; };
	string getTiengKeu() { return tiengKeu; };

	void setSoCon(int _soCon);
	void setSoLitSua(int _soLitSua);
	void setTiengKeu(string _tiengKeu);

	//void sinhCon();
	//void choSua();
	virtual void keu() = 0;

	//void nhap();
	void xuat();
};

