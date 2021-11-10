#include "CDate.h"
#include <iostream>

using namespace std;

CDate::CDate(void)
{
	day = 28;
	month = 10;
	year = 2021;
}

CDate::~CDate(void) {}

bool CDate::check(const int& d, const int& m, const int& y)
{
	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (d <= 0 || d > 31) 
			return false;
		break;
	case 4: case 6: case 9: case 11:
		if (d <= 0 || d > 30) 
			return false;
		break;
	case 2:
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		{
			if (d <= 0 || d > 29) 
				return false;
		}
		else if (d <= 0 || d > 28) 
			return false;
		break;
	default: 
		return false;
	}
	return true;
}

istream& operator>>(istream& is, CDate& d)
{
	bool k;
	do {
		k = false;
		cout << "day = "; is >> d.day;
		cout << "month = "; is >> d.month;
		cout << "year  = "; is >> d.year;
		k = d.check(d.day, d.month, d.year);
		if (k == false)
			cout << "Invalid date! Please try again!\n";
	} while (!k);
	return is;
}

CDate CDate::operator+(const int& x)
{
	CDate d;
	d.day = day;
	d.month = month;
	d.year = year;
	int k = d.day + x;
	do {
		switch (d.month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (k > 31)
			{
				d.month++;
				if (d.month == 13)
				{
					d.month = 1;
					d.year++;
				}
				k -= 31;
			}
			else
			{
				d.day = k;
				k = 0;
			}
			break;
		case 4:case 6: case 9: case 11:
			if (k > 30)
			{
				d.month++;
				k -= 30;
			}
			else
			{
				d.day = k;
				k = 0;
			}
			break;
		case 2:
			if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
			{
				if (k > 29)
				{
					d.month++;
					k -= 29;
				}
				else
				{
					d.day = k;
					k = 0;
				}
			}
			else
			{
				if (k > 28)
				{
					d.month++;
					k -= 28;
				}
				else
				{
					d.day = k;
					k = 0;
				}
			}
			break;
		}
	} while (k > 0);
	return d;
}

ostream& operator<<(ostream& os, const CDate& d)
{
	os << d.day << "/" << d.month << "/" << d.year;
	return os;
}

CDate CDate::operator-(const int& a)
{
	CDate d;
	d.day = day;
	d.month = month;
	d.year = year;
	int x = a;
	do {
		if (d.day > x)
		{
			d.day -= x;
			x = 0;
		}
		else
		{
			x -= d.day;
			d.month--;
			switch (d.month)
			{
			case 1:case 3: case 5: case 7: case 8: case 10:
				d.day = 31;
				break;
			case 4: case 6: case 9: case 11:
				d.day = 30;
				break;
			case 2:
				if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0)) 
					d.day = 29;
				else 
					d.day = 28;
				break;
			case 0:
				d.month = 12;
				d.year--;
				d.day = 31;
				break;
			}
		}
	} while (x > 0);
	return d;
}

long CDate::operator-(const CDate& d)
{
	CDate x;
	x.day = day;
	x.month = month;
	x.year = year;
	long a = x.day;
	do {
		switch (x.month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			a += 31;
			x.month--;
			if (x.month == 0)
			{
				x.year--;
				x.month = 12;
			}
			break;
		case 4: case 6: case 9: case 11:
			a += 30;
			x.month--;
			break;
		case 2:
			if (x.year % 400 == 0 || (x.year % 4 == 0 && x.year % 100 != 0))
			{
				a += 29;
				x.month--;
			}
			else
			{
				a += 28;
				x.month--;
			}
		}
	} while (x.year > 0);

	x.day = d.day;
	x.month = d.month;
	x.year = d.year;
	long b = x.day;
	do {
		switch (x.month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			b += 31;
			x.month--;
			if (x.month == 0)
			{
				x.year--;
				x.month = 12;
			}
			break;
		case 4: case 6: case 9: case 11:
			b += 30;
			x.month--;
			break;
		case 2:
			if (x.year % 400 == 0 || (x.year % 4 == 0 && x.year % 100 != 0))
			{
				b += 29;
				x.month--;
			}
			else
			{
				b += 28;
				x.month--;
			}
		}
	} while (x.year > 0);
	return a - b;
}

void CDate::operator++()
{
	day++;
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (day > 31)
		{
			day = 1;
			month++;
			if (month > 12)
			{
				year++;
				month = 1;
			}
		}
		break;
	case 4: case 6: case 9: case 11:
		if (day > 30)
		{
			day = 1;
			month++;
		}
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			if (day > 29)
			{
				day = 1;
				month++;
			}
		}
		else
		{
			if (day > 28)
			{
				day = 1;
				month++;
			}
		}
	}
}

void CDate::operator--(int)
{
	day--;
	if (day == 0)
	{
		month--;
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10:
			day = 31;
			break;
		case 0:
			day = 31;
			month = 12;
			year--;
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) day = 29;
			else day = 28;
			break;
		}
	}
}
