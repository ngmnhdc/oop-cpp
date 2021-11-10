#pragma once
#include <istream>
#include <ostream>

using namespace std;

class CTime
{
private:
	int hour, minute, second;
public:
	CTime();
	CTime(int h, int m, int s);
	~CTime();
	CTime operator+(const int&);
	CTime operator-(const int&);
	void operator++(int);
	void operator--();
	friend istream& operator>>(istream& is, CTime& t);
	friend ostream& operator<<(ostream& os, CTime& t);
};

