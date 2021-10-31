#include "PhanSo.h"

using namespace std;

PhanSo::PhanSo() {
	this->TuSo = 1;
	this->MauSo = 1;
}

PhanSo::PhanSo(float t) {
	this->TuSo = t;
	this->MauSo = 1;
}

PhanSo::PhanSo(float t, float m) {
	this->TuSo = t;
	this->MauSo = m;
}

PhanSo::PhanSo(const PhanSo& p) {
	this->TuSo = p.TuSo;
	this->MauSo = p.MauSo;
}

PhanSo::~PhanSo() {

}

void PhanSo::Nhap() {
	cout << "Nhap tu so: ";
	cin >> this->TuSo;
	cout << "Nhap mau so: ";
	cin >> this->MauSo;
}

void PhanSo::Xuat() {
	if (this->MauSo != 1)
		cout << TuSo << "/" << MauSo << endl;
	else cout << TuSo << endl;
}

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

PhanSo PhanSo::RutGon(PhanSo& p) {
	int ucln;
	ucln = GCD(p.TuSo, p.MauSo);
	p.TuSo /= ucln;
	p.MauSo /= ucln;
	return p;
}

PhanSo PhanSo::operator+(PhanSo p) {
	PhanSo res;
	res.TuSo = this->TuSo * p.MauSo + p.TuSo * this->MauSo;
	res.MauSo = this->MauSo * p.MauSo;
	RutGon(res);
	return res;
}

PhanSo PhanSo::operator-(PhanSo p) {
	PhanSo res;
	res.TuSo = this->TuSo * p.MauSo - p.TuSo * this->MauSo;
	res.MauSo = this->MauSo * p.MauSo;
	RutGon(res);
	return res;
}

PhanSo PhanSo::operator*(PhanSo p) {
	PhanSo res;
	res.TuSo = this->TuSo * p.TuSo;
	res.MauSo = this->MauSo * p.MauSo;
	RutGon(res);
	return res;
}

PhanSo PhanSo::operator/(PhanSo p) {
	PhanSo res;
	res.TuSo = this->TuSo * p.MauSo;
	res.MauSo = this->MauSo * p.TuSo;
	RutGon(res);
	return res;
}

bool PhanSo::operator==(PhanSo p) {
	RutGon(*this);
	RutGon(p);
	if (this->TuSo == p.TuSo && this->MauSo == p.MauSo)
		return true;
	else return false;
}

bool PhanSo::operator>(PhanSo p) {
	if (this->TuSo * p.MauSo > this->MauSo * p.TuSo)
		return true;
	else return false;
}

bool PhanSo::operator<(PhanSo p) {
	if (this->TuSo * p.MauSo < this->MauSo * p.TuSo)
		return true;
	else return false;
}

bool PhanSo::operator>=(PhanSo p) {
	if (this->TuSo * p.MauSo >= this->MauSo * p.TuSo)
		return true;
	else return false;
}

bool PhanSo::operator<=(PhanSo p) {
	if (this->TuSo * p.MauSo <= this->MauSo * p.TuSo)
		return true;
	else return false;
}

istream& operator>> (istream& is, PhanSo& p) {
	is >> p.TuSo >> p.MauSo;
	while (!p.MauSo) {
		cout << "Nhap lai mau so : ";
		is >> p.MauSo;
	}
	return is;
}

ostream& operator<< (ostream& os, PhanSo& p) {
	os << p.TuSo;
	if (p.TuSo != 0 && p.MauSo != 1)
		os << "/" << p.MauSo;
	return os;
}