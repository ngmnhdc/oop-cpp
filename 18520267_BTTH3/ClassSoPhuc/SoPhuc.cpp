#include "SoPhuc.h"
#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

void SoPhuc::Nhap() {
	cout << "Nhap phan thuc: ";
	cin >> this->thuc;
	cout << "Nhap phan ao: ";
	cin >> this->ao;
}

void SoPhuc::Xuat() {
	if (this->ao == 0) {
		cout << this->thuc << endl;
	}
	else if (this->ao == 1) {
		cout << this->thuc << "+i" << endl;
	}
	else if (this->ao == -1) {
		cout << this->thuc << "-i" << endl;
	}
	else if (this->ao > 0) {
		cout << this->thuc << "+" << this->ao << "i" << endl;
	}
	else {
		cout << this->thuc << this->ao << "i" << endl;
	}
}

SoPhuc::SoPhuc() {
	this->thuc = 0;
	this->ao = 0;
}

SoPhuc::SoPhuc(float a) {
	this->thuc = a;
	this->ao = 0;
}

SoPhuc::SoPhuc(float a, float b) {
	this->thuc = a;
	this->ao = b;
}

SoPhuc SoPhuc::operator+(SoPhuc p) {
	SoPhuc res;
	res.thuc = this->thuc + p.thuc;
	res.ao = this->ao + p.ao;
	return res;
}

SoPhuc SoPhuc::operator-(SoPhuc p) {
	SoPhuc res;
	res.thuc = this->thuc - p.thuc;
	res.ao = this->ao - p.ao;
	return res;
}

SoPhuc SoPhuc::operator*(SoPhuc p) {
	SoPhuc res;
	res.thuc = this->thuc * p.thuc - this->ao * p.ao;
	res.ao = this->thuc * p.ao + this->ao * p.thuc;
	return res;
}

SoPhuc SoPhuc::operator/(SoPhuc p) {
	SoPhuc res;
	res.thuc = (this->thuc * p.thuc + this->ao * p.ao) / (this->ao * this->ao + p.ao * p.ao);
	res.ao = (p.thuc * this->ao - this->thuc * p.ao) / (this->ao * this->ao + p.ao * p.ao);
	return res;
}

float SoPhuc::Module() {
	return sqrt(pow(this->thuc, 2) + pow(this->ao, 2));
}

bool SoPhuc::operator==(SoPhuc p) {
	if (this->Module() == p.Module())
		return true;
	return false;
}

bool SoPhuc::operator!=(SoPhuc p) {
	if (this->Module() != p.Module())
		return true;
	return false;
}

bool SoPhuc::operator>(SoPhuc p) {
	if (this->Module() > p.Module())
		return true;
	return false;
}

bool SoPhuc::operator>=(SoPhuc p) {
	if (this->Module() >= p.Module())
		return true;
	return false;
}

bool SoPhuc::operator<(SoPhuc p) {
	if (this->Module() < p.Module())
		return true;
	return false;
}

bool SoPhuc::operator<=(SoPhuc p) {
	if (this->Module() <= p.Module())
		return true;
	return false;
}