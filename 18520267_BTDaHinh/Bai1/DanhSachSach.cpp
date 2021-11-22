#include "DanhSachSach.h"
#include "SachGiaoKhoa.h"
#include "TieuThuyet.h"
#include "TapChi.h"
#include <iostream>

using namespace std;

DanhSachSach::DanhSachSach() {}

DanhSachSach::~DanhSachSach() {}

void DanhSachSach::nhap() {
	int sl;
	cout << "Nhap so luong sach: ";
	cin >> sl;
	for (int i = 0; i < sl; i++) {
		int opt;
		do {
			cout << "Nhap loai sach (1 - Sach Giao Khoa, 2 - Tieu Thuyet, 3 - Tap Chi): ";
			cin >> opt;
		} while (opt < 1 || opt > 3);
		if (opt == 1) {
			SachGiaoKhoa* sgk = new SachGiaoKhoa();
			sgk->nhap();
			this->ds.push_back(sgk);
		}

		if (opt == 2) {
			TieuThuyet* tt = new TieuThuyet();
			tt->nhap();
			this->ds.push_back(tt);
		}
		if (opt == 3) {
			TapChi* tc = new TapChi();
			tc->nhap();
			this->ds.push_back(tc);
		}
	}
}

void DanhSachSach::xuat() {
	cout << "\nDANH SACH SACH" << endl;
	cout << "Ten sach\tSo trang\tGia tien\tKhoi lop / The loai / Ky" << endl;
	for (int i = 0; i < ds.size(); i++) {
		ds[i]->xuat();
	}
}