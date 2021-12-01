#include "NhanVat.h"
#include <iostream>

using namespace std;

string dsMonPhai[] = {
	"Thieu Lam",
	"Thien Vuong Bang",
	"Ngu Doc Giao",
	"Duong Mon",
	"Nga My",
	"Thuy Yen Mon",
	"Cai Bang",
	"Thien Nhan Giao",
	"Con Lon",
	"Vo Dang"
};

NhanVat::NhanVat() {
	monPhai = 0;
	setHe(monPhai);
}

NhanVat::~NhanVat() {}

void NhanVat::nhap() {
	cout << "\n  ** NHAP NHAN VAT **" << endl;
	DoiTuong::nhap();
	setSatThuong(capDo * 5);
	cout << "  +-------+-------------------+" << endl;
	cout << "  | Input | Mon phai          |" << endl;
	cout << "  +-------+-------------------+" << endl;
	cout << "  |   0   | Thieu Lam         |" << endl;
	cout << "  |   1   | Thien Vuong Bang  |" << endl;
	cout << "  |   2   | Ngu Doc Giao      |" << endl;
	cout << "  |   3   | Duong Mon         |" << endl;
	cout << "  |   4   | Nga My            |" << endl;
	cout << "  |   5   | Thuy Yen Mon      |" << endl;
	cout << "  |   6   | Cai Bang          |" << endl;
	cout << "  |   7   | Thien Nhan Giao   |" << endl;
	cout << "  |   8   | Con Lon           |" << endl;
	cout << "  |   9   | Vo Dang           |" << endl;
	cout << "  +-------+-------------------+" << endl;
	cout << "  Nhap mon phai: ";
	cin >> monPhai;
}

void NhanVat::xuat() {
	cout << endl;
	cout << "  Ten nhan vat: " << ten << endl;
	cout << "  Cap do: " << capDo << endl;
	cout << "  Sat thuong: " << satThuong << endl;
	cout << "  Mon phai: " << dsMonPhai[monPhai] << endl;
}

int NhanVat::getHe() {
	return he;
}

void NhanVat::setHe(int _monPhai) {
	switch (he) {
	case 0 : case 1 :
		he = 0;
		break;
	case 2: case 3:
		he = 2;
		break;
	case 4: case 5:
		he = 1;
		break;
	case 6: case 7:
		he = 3;
		break;
	case 8: case 9:
		he = 4;
		break;
	default: 
		break;
	}
}