#include "BanNhac.h"
#include "NotNhac.h"
#include "DauLang.h"
#include <iostream>

using namespace std;

BanNhac::BanNhac() {
	dskh.resize(0);
}

BanNhac::~BanNhac() {}

void BanNhac::nhap() {
	int opt;
	cout << "  NHAP BAN NHAC";
	do {
		do {
			cout << endl;
			cout << "  +-------+------------------+" << endl;
			cout << "  | Input |  Thuc hien       |" << endl;
			cout << "  +-------+------------------+" << endl;
			cout << "  |   1   |  Them not nhac   |" << endl;
			cout << "  |   2   |  Them dau lang   |" << endl;
			cout << "  |   3   |  Thoat           |" << endl;
			cout << "  +-------+------------------+" << endl;
			cout << "  Nhap lua chon: ";
			cin >> opt;
			if (opt == 1) {
				NotNhac* n = new NotNhac();
				n->nhap();
				dskh.push_back(n);
			}
			else if (opt == 2) {
				DauLang* d = new DauLang();
				d->nhap();
				d->setType(1);
				dskh.push_back(d);
			}
		} while (opt != 3);
	} while (opt < 1 || opt > 3);
}

void BanNhac::xuat() {
	cout << "\n  Ban nhac:\t";
	for (int i = 0; i < dskh.size() - 1; i++) {
		dskh[i]->xuat();
		cout << " - ";
	}
	dskh[dskh.size() - 1]->xuat();
}

int BanNhac::demNotLangDen() {
	int count = 0;
	for (int i = 0; i < dskh.size() - 1; i++) {
		if (dskh[i]->getType() == 1) {
			if (dskh[i]->getTruongDo() == 2)
				count++;
		}
	}
	return count;
}

void BanNhac::timNotCaoNhat() {
	int max = 0;
	for (int i = 0; i < dskh.size(); i++) {
		if (dskh[i]->getType() == 0) {
			NotNhac* nn = (NotNhac*)dskh[i];
			if (nn->getCaoDo() > max)
				max = nn->getCaoDo();
		}
	}
	for (int i = 0; i < dskh.size(); i++) {
		NotNhac* nn = (NotNhac*)dskh[i];
		if (nn->getCaoDo() == max)
		{
			nn->xuat();
			cout << "  ";
		}
	}
}