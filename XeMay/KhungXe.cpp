#include "KhungXe.h"
#include <iostream>
#include <fstream>

using namespace std;

KhungXe::KhungXe() {
	ma = "";
	loai = 0;
	gia = 0;
	hangSX = "";
}

KhungXe::~KhungXe() {}

void KhungXe::nhap() {
	cout << "Chon khung xe (1 - khung nhom cach nhiet, 2 - khung nhua): ";
	cin >> loai;
	cout << "\tNhap ma so: ";
	cin.ignore();
	getline(cin, ma);
	cout << "\tNhap hang san xuat: ";
	getline(cin, hangSX);
	loai == 1 ? gia = 500 : gia = 200;
}

void KhungXe::xuat() {
	cout << "\n\tKhung xe: " << ma << "  Loai: " << (loai == 1 ? "nhom cach nhiet" : "nhua") << "  Hang: " << hangSX << "  Gia: " << gia;
}

void KhungXe::luu() {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	string loaiDongCo[3] = { "A", "B", "C" };
	f << "\n\tKhung xe: " << ma << "  Loai: " << (loai == 1 ? "nhom cach nhiet" : "nhua") << "  Hang: " << hangSX << "  Gia: " << gia;
	f.close();
}