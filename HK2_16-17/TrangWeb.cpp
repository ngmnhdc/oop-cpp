#include "TrangWeb.h"
#include "Label.h"
#include "Button.h"
#include <iostream>

using namespace std;

TrangWeb::TrangWeb() {
	ds.resize(0);
}

TrangWeb::~TrangWeb() {}

void TrangWeb::nhap() {
	int opt;
	do {
		cout << "1. Nhap danh sach thanh phan" << endl;
		cout << "2. Thoat" << endl;
		cout << "Nhap lua chon: ";
		cin >> opt;
		if (opt == 1) {
			int type;
			do {
				cout << "Nhap thanh phan (1 - Label, 2 - Button): ";
				cin >> type;
			} while (type != 1 && type != 2);
			if (type == 1) {
				Label* l = new Label();
				l->nhap();
				ds.push_back(l);
			}
			else {
				Button* b = new Button();
				b->nhap();
				ds.push_back(b);
			}
		}
		else break;
	} while (true);
}

void TrangWeb::isBoTucTrucTiep() {
	Button* temp = (Button*)ds[0];
	if (temp->isBoTucTrucTiep())
		cout << "\n2. Thanh phan phoi mau bo tuc truc tiep. ";
	else cout << "\n2. Thanh phan khong phoi mau bo tuc truc tiep. ";
}

bool isMauBoTuc(int x, int y)
{
	return abs(x - y) == 6;
}

bool isMauTuongDong(int x, int y, int z)
{
	int data[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,1,2 };
	return (data[x + 1] == y && data[x + 2] == z);
}

void TrangWeb::kiemTraPhoiMau() {
	int count[13];
	for (int i = 0; i <= 12; i++)
		count[i] = 0;
	for (int i = 0; i < ds.size(); i++) {
		Button* temp = (Button*)ds[i];
		count[temp->getMauNen()]++;
	}

	int spt = 0;
	int mau[13];
	for (int i = 0; i <= 12; i++) {
		if (count[i] != 0)
			mau[spt++] = i;
	}
	
	cout << "\n\n3. Mau nen cua cac thanh phan theo nguyen tac: ";
	if (spt == 1)
		cout << "Phoi mau don sac.\n";
	else if (spt == 2 && isMauBoTuc(mau[0], mau[1]))
			cout << "Phoi mau bo tuc truc tiep.\n";
		else if (spt == 3 && isMauTuongDong(mau[0], mau[1], mau[2]))
				cout << "Phoi mau tuong dong.\n";
			else
				cout << "Khong theo nguyen tac phoi mau nao.\n";
}