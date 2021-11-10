#include <iostream>
#include "CTime.h"
#include "CTimeSpan.h"
#include "CDate.h"

using namespace std;

void main() {
	CTime a(3,9,0), b;
	cout << "Original Time: " << a << endl;
	a++;
	cout << "Time after increase 1s: " << a << endl;
	b = a + 120;
	cout << "Time after increase 120s: " << b << endl;

	CTimeSpan ts1, ts2, ts3, ts4;
	cout << "\nInput Time Span 1: " << endl;
	cin >> ts1;
	cout << "Input Time Span 2: " << endl;
	cin >> ts2;
	ts3 = ts1 + ts2;
	cout << "\nSum of 2 Time Span = " << ts3 << endl;
	ts4 = ts1 - ts2;
	cout << "Minus of 2 Time Span = " << ts4 << endl;

	CDate d1, d2, d3;
	cout << "\nInput date 1: " << endl;
	cin >> d1;
	cout << "Input date 2: " << endl;
	cin >> d2;
	d3 = d1 + 30;
	cout << "\nd1 + 30 = " << d3 << endl;
	d2--;
	cout << "d2-- = " << d2 << endl;
	long d;
	d = d2 - d1;
	cout << "d2 - d1 = " << d << endl;
 }