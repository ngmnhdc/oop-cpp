#include <iostream>
#include "DHCNTT.h"
#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

using namespace std;

DHCNTT::DHCNTT() {

}

DHCNTT::~DHCNTT() {

}

void DHCNTT::nhap() {
	int sl;
	cout << "Nhap so luong sinh vien: ";
	cin >> sl;
	for (int i = 0; i < sl; i++) {
		int opt;
		do {
			cout << "\nNhap he dao tao (0 - Cao Dang, 1 - Dai Hoc): ";
			cin >> opt;
		} while (opt < 0 || opt > 1);
		if (opt == 0) {
			SinhVienCaoDang* cd = new SinhVienCaoDang();
			cd->nhap();
			this->dssv.push_back(cd);
		}
		else {
			SinhVienDaiHoc* dh = new SinhVienDaiHoc();
			dh->nhap();
			this->dssv.push_back(dh);
		}
	}
}

void DHCNTT::xuat() const {
	for (int i = 0; i < this->dssv.size(); i++) {
		cout << "\n";
		this->dssv[i]->xuat();
	}
}

void DHCNTT::dsTotNghiep() {
	int count = 0;
	for (int i = 0; i < this->dssv.size(); i++) {
		if (this->dssv[i]->xetTotNghiep()) {
			cout << "\n";
			this->dssv[i]->xuat();
			count++;
		}
	}
	cout << "\nTong cong: " << count << " sinh vien.";
}

float DHCNTT::maxDTB() {
	float max = this->dssv[0]->getDiemTB();
	for (int i = 1; i < this->dssv.size(); i++) {
		if (this->dssv[i]->getDiemTB() > max)
			max = this->dssv[i]->getDiemTB();
	}
	return max;
}

vector<SinhVien*> DHCNTT::svMaxDTB() {
	vector<SinhVien*> dsmaxDTB;
	for (int i = 0; i < this->dssv.size(); i++) {
		if (this->dssv[i]->getKieuSV() && this->dssv[i]->getDiemTB() == maxDTB()) {
			dsmaxDTB.push_back(this->dssv[i]);
		}
	}
	return dsmaxDTB;
}