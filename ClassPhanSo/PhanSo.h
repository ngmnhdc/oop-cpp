#pragma once
#include <iostream>

using namespace std;

class PhanSo {
private:
	float TuSo;
	float MauSo;
public:
	PhanSo();
	PhanSo(float t);
	PhanSo(float t, float m);
	PhanSo(const PhanSo& p);
	~PhanSo();

	PhanSo RutGon(PhanSo& p);
	PhanSo operator+(PhanSo p);
	PhanSo operator-(PhanSo p);
	PhanSo operator*(PhanSo p);
	PhanSo operator/(PhanSo p);

	bool operator==(PhanSo p);
	bool operator>(PhanSo p);
	bool operator<(PhanSo p);
	bool operator>=(PhanSo p);
	bool operator<=(PhanSo p);

	friend istream& operator>> (istream& is, PhanSo& p);
	friend ostream& operator<< (ostream& os, PhanSo& p);
	void Nhap();
	void Xuat();
};
