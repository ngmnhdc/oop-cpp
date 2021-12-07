#include "BanhXe.h"
#include <iostream>
#include <fstream>

using namespace std;

BanhXe::BanhXe(){
	ma = "";
	loai = 0;
	gia = 0;
	hangSX = "";
}

BanhXe::~BanhXe(){}

void BanhXe::nhap(int i){
	cout << "Chon loai banh xe thu " << i << " (1 - loai D, 2 - loai E): ";
	cin >> loai;
	cout << "\tNhap ma so: ";
	cin.ignore();
	getline(cin, ma);
	cout << "\tNhap hang san xuat: ";
	getline(cin, hangSX);
	loai == 1 ? gia = 400 : gia = 300;
}

void BanhXe::xuat(int i){
	cout << "\n\tBanh xe "<< i << ": " << ma << "  Loai: " << (loai == 1 ? "D" : "E") << "  Hang: " << hangSX << "  Gia: " << gia;
}

void BanhXe::luu(int i) {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	f << "\n\tBanh xe:  " << i << ": " << ma << "  Loai: " << (loai == 1 ? "D" : "E") << "  Hang: " << hangSX << "  Gia: " << gia;
	f.close();
}