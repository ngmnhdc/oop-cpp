#include "DongCoC.h"
#include <iostream>
#include <fstream>

using namespace std;

DongCoC::DongCoC() {
	loai = 3;
	gia = 400;
}

DongCoC::~DongCoC() {}

void DongCoC::nhap() {
	cout << "\tNhap ma dong co: ";
	cin.ignore();
	getline(cin, ma);
	cout << "\tHang san xuat: ";
	getline(cin, hangSX);
}

void DongCoC::xuat() {
	string loaiDongCo[3] = { "A", "B", "C" };
	cout << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Hang: " << hangSX << "  Gia: " << gia;
}

void DongCoC::luu() {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	string loaiDongCo[3] = { "A", "B", "C" };
	f << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Hang: " << hangSX << "  Gia: " << gia;
	f.close();
}