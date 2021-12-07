#include "DongCoA.h"
#include <iostream>
#include <fstream>

using namespace std;

DongCoA::DongCoA() {
	loai = 1;
	gia = 500;
}

DongCoA::~DongCoA() {}

void DongCoA::nhap() {
	cout << "\tNhap ma dong co: ";
	cin.ignore();
	getline(cin, ma);
	cout << "\tHang san xuat: ";
	getline(cin, hangSX);
}

void DongCoA::xuat() {
	string loaiDongCo[3] = { "A", "B", "C" };
	cout << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Hang: " << hangSX << "  Gia: " << gia;
}

void DongCoA::luu() {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	string loaiDongCo[3] = { "A", "B", "C" };
	f << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Hang: " << hangSX << "  Gia: " << gia;
	f.close();
}