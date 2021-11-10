#include "CTime.h"

CTime::CTime() {
	hour = 0;
	minute = 0;
	second = 0;
}

CTime::CTime(int h, int m, int s) {
	hour = (h < 0 || h>23) ? 0 : h;
	minute = (m < 0 || m>59) ? 0 : m;
	second = (s < 0 || s>59) ? 0 : s;
}

CTime::~CTime() {
}

CTime CTime::operator+(const int& x) {
	CTime newTime;
	int a, b;
	newTime.second = (this->second + x) % 60;
	a = (this->second + x) / 60;
	newTime.minute = (this->minute + a) % 60;
	b = (this->minute + a) / 60;
	newTime.hour = hour + b;
	return newTime;
}

CTime CTime::operator-(const int& x) {
	CTime newTime;
	int a, b;
	a = (this->second - x < 0) ? -1 : 0;
	newTime.second = (a == -1) ? 60 + second - x : second - x;
	b = (minute + a) < 0 ? -1 : 0;
	newTime.minute = (b == -1) ? 60 + minute + a : minute + a;
	newTime.hour = b + hour;
	if (newTime.hour < 0)
	{
		a = (-this->second + x < 0) ? -1 : 0;
		newTime.second = (a == -1) ? 60 - second + x : -second + x;
		b = (-minute + a) < 0 ? -1 : 0;
		newTime.minute = (b == -1) ? 60 - minute + a : -minute + a;
		newTime.hour = -(b - hour);
		if (newTime.hour == 0)
		{
			if (newTime.minute != 0) newTime.minute = 0 - newTime.minute;
			else if (newTime.second != 0) newTime.second = 0 - newTime.second;
		}
		return newTime;
	}
	return newTime;
}

void CTime::operator++(int) {
	CTime newTime;
	int a, b;
	newTime.second = (this->second + 1) % 60;
	a = (this->second + 1) / 60;
	newTime.minute = (this->minute + a) % 60;
	b = (this->minute + a) / 60;
	newTime.hour = hour + b;
	hour = newTime.hour;
	minute = newTime.minute;
	second = newTime.second;
}

void CTime::operator--() {
	CTime newTime;
	int a, b;
	a = (this->second - 1 < 0) ? -1 : 0;
	newTime.second = (a == -1) ? 60 + second - 1 : second - 1;
	b = (minute + a) < 0 ? -1 : 0;
	newTime.minute = (b == -1) ? 60 + minute + a : minute + a;
	newTime.hour = b + hour;
	if (newTime.hour < 0)
	{
		a = (-this->second + 1 < 0) ? -1 : 0;
		newTime.second = (a == -1) ? 60 - second + 1 : -second + 1;
		b = (-minute + a) < 0 ? -1 : 0;
		newTime.minute = (b == -1) ? 60 - minute + a : -minute + a;
		newTime.hour = -(b - hour);
		if (newTime.hour == 0)
		{
			if (newTime.minute != 0) newTime.minute = 0 - newTime.minute;
			else if (newTime.second != 0) newTime.second = 0 - newTime.second;
		}
		hour = newTime.hour;
		minute = newTime.minute;
		second = newTime.second;
	}
	hour = newTime.hour;
	minute = newTime.minute;
	second = newTime.second;
}

istream& operator>>(istream& is, CTime& t) {
	is >> t.hour >> t.minute >> t.second;
	return is;
}

ostream& operator<<(ostream& os, CTime& t) {
	if (t.hour < 0 || t.minute < 0 || t.second < 0)
		os << "-";
	os << (t.hour < 10 && t.hour >= 0 ? "0" : "") << abs(t.hour) << ":"
		<< (t.minute < 10 && t.minute >= 0 ? "0" : "") << abs(t.minute) << ":"
		<< (t.second < 10 && t.second >= 0 ? "0" : "") << abs(t.second);
	return os;
}