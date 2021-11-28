#include "BanNhac.h"
#include <iostream>

using namespace std;

void main() {
	BanNhac n;
	n.nhap();
	n.xuat();
	cout << "\n\n  So not lang den:\t" <<	n.demNotLangDen();
	cout << "\n\n  Not nhac cao nhat:\t";
	n.timNotCaoNhat();
	cout << endl;
}