#include "ThanhPhan.h"
#include <iostream>

using namespace std;

ThanhPhan::ThanhPhan(){
	hoanhDo = 0;
	tungDo = 0;
	chieuDai = 0;
	chieuRong = 0;
	type = 0;
}

ThanhPhan::~ThanhPhan(){}

void ThanhPhan::setType(int _type) { type = _type; }

void ThanhPhan::nhap() {
	cout << "Nhap toa do: " << endl;
	cout << "\tHoanh do: ";
	cin >> hoanhDo;
	cout << "\tTung do: ";
	cin >> tungDo;
	cout << "Nhap kich thuoc: " << endl;
	cout << "\tChieu dai: ";
	cin >> chieuDai;
	cout << "\tChieu rong: ";
	cin >> chieuRong;
}