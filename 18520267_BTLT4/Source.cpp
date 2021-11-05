// Xây dựng class STRING và hỗ trợ các toán tử: 
// - nối chuỗi +
// - so sánh ==, !=
// - nhập >>, xuất <<

#include <iostream>
#include "STRING.h"

using namespace std;

int main() {
	STRING a, b = "3", c = b;
	a = b + c + b;
	cout << "Chuoi a: " << a << endl;
	cin >> b;
	cout << "Chuoi b: " << b << endl;
	if (a == b) {
		cout << "a == b";
	}
	else {
		cout << "a != b";
	}
	return 0;
}