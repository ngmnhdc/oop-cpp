#include "QuaiVat.h"
#include <iostream>

using namespace std;

string dsHe[] = {
	"Kim",
	"Thuy",
	"Moc",
	"Hoa",
	"Tho",
};

QuaiVat::QuaiVat() {
	loai = 0;
	he = 0;
}

QuaiVat::~QuaiVat() {}

void QuaiVat::nhap() {
	cout << "\n  ** NHAP QUAI VAT **" << endl;
	DoiTuong::nhap();
	// Nhap loai quai vat va tinh sat thuong
	cout << "  +-------+---------------+" << endl;
	cout << "  | Input | Loai quai vat |" << endl;
	cout << "  +-------+---------------+" << endl;
	cout << "  |   0   | Thong thuong  |" << endl;
	cout << "  |   1   | Dau linh      |" << endl;
	cout << "  +-------+---------------+" << endl;
	do {
		cout << "  Nhap loai quai vat: ";
		cin >> loai;
	} while (loai != 0 && loai != 1);

	if (loai == 0)
		setSatThuong(capDo * 3);
	else
		setSatThuong(capDo * 7);

	cout << "  +-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  | Input |   0   |   1   |   2   |   3   |   4   |" << endl;
	cout << "  +-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  |  He   |  Kim  | Thuy  |  Moc  |  Hoa  |  Tho  |" << endl;
	cout << "  +-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  Nhap he: ";
	cin >> he;
}

void QuaiVat::xuat() {
	cout << endl;
	cout << "  Ten quai vat: " << ten << endl;
	cout << "  Cap do: " << capDo << endl;
	cout << "  Sat thuong: " << satThuong << endl;
	cout << "  He: " << dsHe[he] << endl;
}

int QuaiVat::getHe() {
	return he;
}