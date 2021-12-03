#include "Button.h"
#include "ThanhPhan.h"
#include <iostream>

using namespace std;

Button::Button(){
	setType(1);
	hinhAnh = "";
}

Button::~Button(){}

void Button::nhap() {
	//ThanhPhan::nhap();
	cout << "Nhap url hinh anh: ";
	cin.ignore();
	getline(cin, hinhAnh);
	cout << "1 - Red, 2 - Orange, 3 - Yellow, 4 - Spring Green, 5 - Green, 6 - Turquoise" << endl;
	cout << "7 - Cyan, 8 - Ocean, 9 - Blue, 10 - Violet, 11 - Magenta, 12 - Raspberry" << endl;
	cout << "Nhap mau chu: ";
	cin >> mauChu;
	cout << "Nhap mau nen: ";
	cin >> mauNen;
}