#include <iostream>
#include "DHCNTT.h"

using namespace std;

void main() {
	DHCNTT dh;
	dh.nhap();
	cout << "\nDanh sach sinh vien du dieu kien tot nghiep";
	dh.dsTotNghiep();

	vector<SinhVien*> dsmax = dh.svMaxDTB();
	cout << "\n\nDanh sach sinh vien co diem trung binh cao nhat" << endl;
	for (int i = 0; i < dsmax.size(); i++) {
		dsmax[i]->xuat();
		cout << "\n";
	}
}