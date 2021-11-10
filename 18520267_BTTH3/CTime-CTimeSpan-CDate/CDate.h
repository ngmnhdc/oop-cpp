#pragma once
#include <istream>
#include <ostream>

using namespace std;

class CDate
{
private:
	int day, month, year;
public:
    CDate(void);
    ~CDate(void);
    bool check(const int&, const int&, const int&);
    CDate operator+(const int&);
    CDate operator-(const int&);
    long operator-(const CDate&);
    void operator++();
    void operator--(int);
    friend ostream& operator<<(ostream& os, const CDate&);
    friend istream& operator>>(istream& is, CDate&);
};

