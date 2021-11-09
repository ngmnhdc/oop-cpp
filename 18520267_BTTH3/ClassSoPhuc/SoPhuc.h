#pragma once
#include <istream>
#include <ostream>
class SoPhuc
{
private:
	float thuc;
	float ao;
public:
	SoPhuc();
	SoPhuc(float a);
	SoPhuc(float a, float b);
	void Nhap();
	void Xuat();
	float Module();
	SoPhuc operator+(SoPhuc);
	SoPhuc operator-(SoPhuc);
	SoPhuc operator*(SoPhuc);
	SoPhuc operator/(SoPhuc);
	bool operator==(SoPhuc);
	bool operator!=(SoPhuc);
	bool operator>(SoPhuc);
	bool operator>=(SoPhuc);
	bool operator<(SoPhuc);
	bool operator<=(SoPhuc); 
};

