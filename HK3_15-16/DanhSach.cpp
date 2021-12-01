#include "DanhSach.h"

DanhSach::DanhSach() {
	ds.resize(0);
}

DanhSach::~DanhSach() {}

void DanhSach::nhap() {
	int opt;
	cout << "\n**** NHAP DANH SACH NGUOI CHOI VA QUAI VAT ****" << endl;
	do {
		do {
			cout << endl;
			cout << "  +-------+-------------------+" << endl;
			cout << "  | Input |  Thuc hien        |" << endl;
			cout << "  +-------+-------------------+" << endl;
			cout << "  |   1   |  Them nguoi choi  |" << endl;
			cout << "  |   2   |  Them quai vat    |" << endl;
			cout << "  |   3   |  Thoat            |" << endl;
			cout << "  +-------+-------------------+" << endl;
			cout << "  Nhap lua chon: ";
			cin >> opt;
			if (opt == 1) {
				NhanVat* n = new NhanVat();
				n->nhap();
				ds.push_back(n);
			}
			else if (opt == 2) {
				QuaiVat* q = new QuaiVat();
				q->nhap();
				ds.push_back(q);
			}
		} while (opt != 3);
	} while (opt < 1 || opt > 3);
}

void DanhSach::xuat() {
	cout << "\n**** XUAT DANH SACH NGUOI CHOI VA QUAI VAT ****" << endl;
	for (int i = 0; i < ds.size(); i++) {
		ds[i]->xuat();
	}
}

void DanhSach::maxSatThuong() {
	cout << "\n**** PHAN TU CO SAT THUONG CAO NHAT ****" << endl;
	float max = ds[0]->getSatThuong();
	for (int i = 1; i < ds.size(); i++) {
		if (ds[i]->getSatThuong() > max)
			max = ds[i]->getSatThuong();
	}
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i]->getSatThuong() == max)
			ds[i]->xuat();
	}
}

bool DanhSach::isTuongSinh(int a, int b) {
	return (b - a == 1) ? true : false;
}

bool DanhSach::isTuongKhac(int a, int b) {
	return (b - a == 2) ? true : false;
}

void DanhSach::gaySatThuong() {
	int a, b;
	cout << "\n**** SO SANH SAT THUONG GIUA HAI PHAN TU ****" << endl;
	cout << "\n  Nhap index A: ";
	cin >> a;
	cout << "  Nhap index B: ";
	cin >> b;
	cout << endl;
	NhanVat* A = (NhanVat*)ds[a];
	NhanVat* B = (NhanVat*)ds[b];
	if (isTuongSinh(A->getHe(), B->getHe()) == true) {
		cout << "  " << A->getTen() << " gay cho " << B->getTen() << " sat thuong la: " << A->getSatThuong() * 1.1 << endl;
		cout << "  " << B->getTen() << " gay cho " << A->getTen() << " sat thuong la: " << B->getSatThuong() * 1.1 << endl;
	}
	else if (isTuongKhac(A->getHe(), B->getHe()) == true) {
		cout << "  " << A->getTen() << " gay cho " << B->getTen() << " sat thuong la: " << A->getSatThuong() * 1.2 << endl;
		cout << "  " << B->getTen() << " gay cho " << A->getTen() << " sat thuong la: " << B->getSatThuong() * 0.8 << endl;
	} else {
		cout << "  " << A->getTen() << " gay cho " << B->getTen() << " sat thuong la: " << A->getSatThuong() << endl;
		cout << "  " << B->getTen() << " gay cho " << A->getTen() << " sat thuong la: " << B->getSatThuong() << endl;
	}
}