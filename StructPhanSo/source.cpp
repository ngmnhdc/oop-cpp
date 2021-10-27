#include <iostream>

using namespace std;

struct PhanSo {
	int TuSo;
	int MauSo;
};

void Nhap(PhanSo& p) {
	cout << "Nhap tu so: ";
	cin >> p.TuSo;
	cout << "Nhap mau so: ";
	cin >> p.MauSo;
}

void NhapN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "-- Nhap phan so thu " << i + 1 << " --" << endl;
		Nhap(p[i]);
	}
}

void Xuat(PhanSo p) {
	if (p.MauSo != 1)
		cout << p.TuSo << "/" << p.MauSo << endl;
	else cout << p.TuSo << endl;
}
/*
void XuatN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		Xuat(p[i]);
	}
}
*/

int GCD(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

void TinhTong(PhanSo p[], int n) {
	int ucln;
	PhanSo sum = p[0];
	for (int i = 1; i < n; i++) {
		sum.TuSo = sum.TuSo * p[i].MauSo + p[i].TuSo * sum.MauSo;
		sum.MauSo = sum.MauSo * p[i].MauSo;
		ucln = GCD(sum.TuSo, sum.MauSo);
		sum.TuSo /= ucln;
		sum.MauSo /= ucln;
	}
	cout << "\n== Tong cua day phan so tren la: ";
	Xuat(sum);
}

void Max(PhanSo p[], int n) {
	PhanSo max = p[0];
	for (int i = 1; i < n; i++) {
		if (max.TuSo * p[i].MauSo < max.MauSo * p[i].TuSo) {
			max = p[i];
		}
	}
	cout << "== Phan so lon nhat la: ";
	Xuat(max);
}

void main() {
	int n;
	cout << "Nhap so luong cua day phan so: ";
	cin >> n;
	PhanSo* p = new PhanSo[n];
	NhapN(p, n);
	TinhTong(p, n);
	Max(p, n);
}
