#include "XeMay.h"
#include "DongCoA.h"
#include "DongCoB.h"
#include "DongCoC.h"
#include <iostream>
#include <fstream>

using namespace std;

XeMay::XeMay() {
	ma = "";
	gia = 0;
	dc.resize(0);
	bx.resize(0);
	kx.resize(0);
}

XeMay::~XeMay() {}

void XeMay::setGia() {
	gia = dc[0]->getGia() + bx[0]->getGia() + bx[1]->getGia() + kx[0]->getGia();
}

void XeMay::nhap() {
	cout << "---------------------------------------------------------------" << endl;
	cout << "Nhap ma so xe: ";
	fflush(stdin); 
	cin.ignore();
	getline(cin, ma);

	// Nhap thong tin dong co
	int type;
	cout << "Chon dong co (1 - dong co A, 2 - dong co B, 3 - dong co C): ";
	cin >> type;
	if (type == 1) {
		DongCoA* a = new DongCoA();
		a->nhap();
		dc.push_back(a);
	} else if (type == 2) {
		DongCoB* b = new DongCoB();
		b->nhap();
		dc.push_back(b);
	} else if (type == 3) {
		DongCoC* c = new DongCoC();
		c->nhap();
		dc.push_back(c);
	}

	// Nhap thong tin 2 banh xe
	cout << "Nhap thong tin 2 banh xe: " << endl;
	BanhXe* bx1 = new BanhXe();
	bx1->nhap(1);
	bx.push_back(bx1);
	BanhXe* bx2 = new BanhXe();
	bx2->nhap(2);
	bx.push_back(bx2);

	// Nhap thong tin khung xe
	KhungXe* k = new KhungXe();
	k->nhap();
	kx.push_back(k);

	// Tinh gia tien
	setGia();
}

void XeMay::xuat(){
	cout << "\nXe may: " << ma << "  Gia: " << gia;
	dc[0]->xuat();
	bx[0]->xuat(1);
	bx[1]->xuat(2);
	kx[0]->xuat();
}

void XeMay::luu() {
	fstream f;
	f.open("./output.txt", ios::out | ios::app);
	f << "\nXe may: " << ma << "  Gia: " << gia;
	f.close();
	dc[0]->luu();
	bx[0]->luu(1);
	bx[1]->luu(2);
	kx[0]->luu();
}