#include "NhanVien.h"
#include "NhanVienSX.h"
#include <iostream>

using namespace std;

NhanVienSX::NhanVienSX() {}

NhanVienSX::~NhanVienSX() {}

void NhanVienSX::Nhap() {
	NhanVien::Nhap();
	cout << "Luong can ban: ";
	cin >> luongcb;
	cout << "So san pham: ";
	cin >> sosp;
}

void NhanVienSX::Xuat() {
	NhanVien::Xuat();
	cout << "Luong can ban: " << luongcb << endl;
	cout << "So san pham: " << sosp << endl;
	cout << "Luong: " << NhanVienSX::TinhLuong() << endl;
}
long NhanVienSX::TinhLuong() {
	return luongcb + sosp * 5000;
}