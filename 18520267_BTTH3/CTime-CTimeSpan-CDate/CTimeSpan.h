#pragma once
#include <istream>
#include <ostream>

using namespace std;

class CTimeSpan
{
private:
	int hour, minute, second;
public:
	CTimeSpan();
	CTimeSpan(int h, int m, int s);
	~CTimeSpan();
	CTimeSpan operator+(const CTimeSpan&);
	CTimeSpan operator-(const CTimeSpan&);
	bool operator<(CTimeSpan&);
	bool operator<=(CTimeSpan&);
	bool operator>(CTimeSpan&);
	bool operator>=(CTimeSpan&);
	bool operator==(CTimeSpan&);
	bool operator!=(CTimeSpan&);
	friend istream& operator>>(istream& is, CTimeSpan& t);
	friend ostream& operator<<(ostream& os, CTimeSpan& t);
};

