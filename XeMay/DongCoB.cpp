#include "DongCoB.h"
#include <iostream>
#include <fstream>

using namespace std;

DongCoB::DongCoB() {
	loai = 2;
	tieuChuan = 0;
}

DongCoB::~DongCoB() {}

void DongCoB::nhap() {
	cout << "\tNhap ma dong co: ";
	cin.ignore();
	getline(cin, ma);
	cout << "\tTieu chuan (1 - tieu chuan 1, 2 - tieu chuan 2, 3 - tieu chuan 3): ";
	cin >> tieuChuan;
	cout << "\tHang san xuat: ";
	cin.ignore();
	getline(cin, hangSX);

	switch (tieuChuan)
	{
	case 1:
		setGia(600); 
		break;
	case 2:
		setGia(700);
		break;
	case 3:
		setGia(800);
		break;
	default:
		break;
	}
}

void DongCoB::xuat() {
	string loaiDongCo[3] = { "A", "B", "C" };
	cout << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Tieu chuan: " << tieuChuan << "  Hang: " << hangSX << "  Gia: " << gia;
}

void DongCoB::luu() {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	string loaiDongCo[3] = { "A", "B", "C" };
	f << "\n\tDong co:  " << ma << "  Loai: " << loaiDongCo[loai - 1] << "  Tieu chuan: " << tieuChuan << "  Hang: " << hangSX << "  Gia: " << gia;
	f.close();
}