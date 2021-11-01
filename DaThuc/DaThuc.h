#pragma once
#include <iostream>

using namespace std;

class DaThuc
{
private:
	int n;
	int* dt;
public:
	DaThuc();
	DaThuc(int _n);
	~DaThuc();

	friend istream& operator>> (istream& is, DaThuc& dt);
	friend ostream& operator<< (ostream& os, DaThuc& dt);
	const DaThuc& operator= (const DaThuc& dt);
	DaThuc operator+ (DaThuc& add);
	DaThuc operator- (DaThuc& sub);
};

