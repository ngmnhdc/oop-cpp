#include "SinhVien.h"
#include <iostream>
#include <string>

using namespace std;

SinhVien::SinhVien() {
	this->mssv = "";
	this->hoTen = "";
	this->diaChi = "";
	this->soTinChi = 0;
	this->dtb = 0;
	this->kieuSV = 0;
}

SinhVien::~SinhVien() {}

void SinhVien::nhap() {
	cout << "Nhap ma so sinh vien: ";
	cin.ignore();
	getline(cin, mssv);
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	cout << "Nhap so tin chi: ";
	cin >> soTinChi;
	cout << "Nhap diem trung binh: ";
	cin >> dtb;
}

void SinhVien::xuat() {
	cout << mssv << "\t" << hoTen << "\t" << diaChi << "\t" << soTinChi << "\t" << dtb << "\t";
}