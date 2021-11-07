#include "CongTy.h"
#include <iostream>

using namespace std;

CongTy::CongTy() {
	slvp = 0;
	slsx = 0;
	nvsx = NULL;
	nvvp = NULL;
}

CongTy::~CongTy() {
	if (nvsx || nvvp) {
		delete[] nvsx, nvvp;
	}
}

void CongTy::NhapDSNV() {
	cout << "So luong nhan vien san xuat: ";
	cin >> slsx;
	nvsx = new NhanVienSX[slsx];
	for (int i = 0; i < slsx; i++) {
		nvsx[i].Nhap();
	}
	cout << "\nSo luong nhan vien van phong: ";
	cin >> slvp;
	nvvp = new NhanVienVP[slvp];
	for (int i = 0; i < slvp; i++) {
		nvvp[i].Nhap();
	}
}

void CongTy::XuatDSNV() {
	cout << "\n--== DANH SACH NHAN VIEN ==--" << endl;
	for (int i = 0; i < slsx; i++) {
		nvsx[i].Xuat();
	}
	for (int i = 0; i < slvp; i++) {
		nvvp[i].Xuat();
	}
}