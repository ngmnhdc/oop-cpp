#include "NhanVien.h"
#include "NhanVienVP.h"
#include <iostream>

using namespace std;

NhanVienVP::NhanVienVP() {}

NhanVienVP::~NhanVienVP() {}

void NhanVienVP::Nhap() {
	NhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> songay;
}

void NhanVienVP::Xuat() {
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << songay << endl;
	cout << "Luong: " << NhanVienVP::TinhLuong() << endl;
}
long NhanVienVP::TinhLuong() {
	return songay * 100000;
}