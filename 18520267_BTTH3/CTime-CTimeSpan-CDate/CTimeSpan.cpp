#include "CTimeSpan.h"

CTimeSpan::CTimeSpan() {
	hour = 0;
	minute = 0;
	second = 0;
}

CTimeSpan::CTimeSpan(int h, int m, int s) {
	hour = (h < 0 || h > 23) ? 0 : h;
	minute = (m < 0 || m > 59) ? 0 : m;
	second = (s < 0 || s > 59) ? 0 : s;
}

CTimeSpan::~CTimeSpan() {
}

CTimeSpan CTimeSpan::operator+(const CTimeSpan& x) {
	CTimeSpan newTime;
	int a, b;
	newTime.second = (this->second + x.second) % 60;
	a = (this->second + x.second) / 60;
	newTime.minute = (this->minute + x.minute + a) % 60;
	b = (this->minute + a) / 60;
	newTime.hour = this->hour + x.hour + b;
	return newTime;
}

CTimeSpan CTimeSpan::operator-(const CTimeSpan& x) {
	CTimeSpan newTime;
	int a, b;
	a = (this->second - x.second < 0) ? -1 : 0;
	newTime.second = (a == -1) ? 60 + second - x.second : second - x.second;
	b = (minute - x.minute + a) < 0 ? -1 : 0;
	newTime.minute = (b == -1) ? 60 + minute - x.minute + a : minute - x.minute + a;
	newTime.hour = hour - x.hour + b;
	if (newTime.hour < 0)
	{
		a = (-this->second + x.second < 0) ? -1 : 0;
		newTime.second = (a == -1) ? 60 - second + x.second : -second + x.second;
		b = (-minute + x.minute + a) < 0 ? -1 : 0;
		newTime.minute = (b == -1) ? 60 - minute + x.minute + a : -minute + x.minute + a;
		newTime.hour = -(b - hour + x.hour);
		return newTime;
	}
	return newTime;
}

bool CTimeSpan::operator<(CTimeSpan& x)
{
	CTimeSpan c;
	int a, b;
	a = (this->second - x.second < 0) ? -1 : 0;
	c.second = (a == -1) ? 60 + second - x.second : second - x.second;
	b = (minute - x.minute + a) < 0 ? -1 : 0;
	c.minute = (b == -1) ? 60 + minute - x.minute + a : minute - x.minute + a;
	c.hour = b + hour - x.hour;
	if (c.hour < 0) 
		return true; 
	return false;
}

bool CTimeSpan::operator<=(CTimeSpan& x)
{
	CTimeSpan c;
	int a, b;
	a = (this->second - x.second < 0) ? -1 : 0;
	c.second = (a == -1) ? 60 + second - x.second : second - x.second;
	b = (minute - x.minute + a) < 0 ? -1 : 0;
	c.minute = (b == -1) ? 60 + minute - x.minute + a : minute - x.minute + a;
	c.hour = b + hour - x.hour;
	if (c.hour <= 0) 
		return true; 
	return false;
}

bool CTimeSpan::operator>(CTimeSpan& x)
{
	CTimeSpan c;
	int a, b;
	a = (this->second - x.second < 0) ? -1 : 0;
	c.second = (a == -1) ? 60 + second - x.second : second - x.second;
	b = (minute - x.minute + a) < 0 ? -1 : 0;
	c.minute = (b == -1) ? 60 + minute - x.minute + a : minute - x.minute + a;
	c.hour = b + hour - x.hour;
	if (c.hour >= 0 && (c.minute != 0 || c.second != 0)) 
		return true; 
	return false;
}

bool CTimeSpan::operator>=(CTimeSpan& x)
{
	CTimeSpan c;
	int a, b;
	a = (this->second - x.second < 0) ? -1 : 0;
	c.second = (a == -1) ? 60 + second - x.second : second - x.second;
	b = (minute - x.minute + a) < 0 ? -1 : 0;
	c.minute = (b == -1) ? 60 + minute - x.minute + a : minute - x.minute + a;
	c.hour = b + hour - x.hour;
	if (c.hour >= 0 && c.minute >= 0 && c.second >= 0) 
		return true; 
	return false;
}

bool CTimeSpan::operator==(CTimeSpan& x)
{
	if (second == x.second && minute == x.minute && hour == x.hour) 
		return true; 
	return false;
}

bool CTimeSpan::operator!=(CTimeSpan& x)
{
	if (second != x.second || minute != x.minute || hour != x.hour) 
		return true; 
	return false;
}

istream& operator>>(istream& is, CTimeSpan& t) {
	is >> t.hour >> t.minute >> t.second;
	return is;
}

ostream& operator<<(ostream& os, CTimeSpan& t) {
	if (t.hour < 0 || t.minute < 0 || t.second < 0)
		os << "-";
	os << (t.hour < 10 && t.hour >= 0 ? "0" : "") << abs(t.hour) << ":"
		<< (t.minute < 10 && t.minute >= 0 ? "0" : "") << abs(t.minute) << ":"
		<< (t.second < 10 && t.second >= 0 ? "0" : "") << abs(t.second);
	return os;
}