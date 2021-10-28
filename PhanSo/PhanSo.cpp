#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo() {
	TuSo = 1;
	MauSo = 1;
}

PhanSo::PhanSo(int t) {
	TuSo = t;
	MauSo = 1;
}

PhanSo::PhanSo(int t, int m) {
	TuSo = t;
	MauSo = m;
}

//PhanSo PhanSo::Cong(PhanSo a, PhanSo b) {
//
//}
//
//void PhanSo::Display() {
//	cout << TuSo << "/" << MauSo << endl;
//}