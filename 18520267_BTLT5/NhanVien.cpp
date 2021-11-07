#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;

NhanVien::NhanVien() {}

NhanVien::~NhanVien() {}

void NhanVien::Nhap() {
	cout << "\nHo ten: ";
	cin >> hoten;
	cout << "Ngay thang nam sinh: ";
	cin >> ngaysinh;
}

void NhanVien::Xuat() {
	cout << "\nHo ten: " << hoten << endl;
	cout << "Ngay thang nam sinh: " << ngaysinh << endl;
}

long TinhLuong() {
	return 0;
}