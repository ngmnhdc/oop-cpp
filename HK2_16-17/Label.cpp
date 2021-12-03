#include "Label.h"
#include "ThanhPhan.h"
#include <iostream>

using namespace std;

Label::Label(){
	setType(0);
	noiDung = "";
	mauNen = 0;
	mauChu = 0;
}

Label::~Label(){}

void Label::nhap() {
	//ThanhPhan::nhap();
	cout << "Nhap noi dung text: ";
	cin.ignore();
	getline(cin, noiDung);
	cout << "1 - Red, 2 - Orange, 3 - Yellow, 4 - Spring Green, 5 - Green, 6 - Turquoise" << endl;
	cout << "7 - Cyan, 8 - Ocean, 9 - Blue, 10 - Violet, 11 - Magenta, 12 - Raspberry" << endl;
	cout << "Nhap mau chu: ";
	cin >> mauChu;
	cout << "Nhap mau nen: ";
	cin >> mauNen;
}

int Label::getMauChu() { return mauChu; };
int Label::getMauNen() { return mauNen; };

bool Label::isBoTucTrucTiep() {
	if (abs(this->getMauChu() - this->getMauNen()) == 6)
		return true;
	return false;
}
