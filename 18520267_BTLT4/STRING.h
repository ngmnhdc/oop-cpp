#pragma once
#include <istream>
#include <ostream>

using namespace std;

class STRING {
private:
	char* content;
	int length;
public:
	STRING();
	STRING(const STRING&);
	STRING(const char*);
	~STRING();

	STRING operator+(STRING);
	STRING& operator=(STRING);
	bool operator==(STRING);
	bool operator!=(STRING);
	friend istream& operator>>(istream&, STRING&);
	friend ostream& operator<<(ostream&, STRING&);
};

