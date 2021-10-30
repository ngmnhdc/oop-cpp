#include <iostream>
#include "Candidate.h"
using namespace std;

void Candidate::Nhap() {
	cout << "Nhap ma so thi sinh: ";
	cin >> id;
	cout << "Nhap ho ten thi sinh: ";
	cin >> hoten;
	cout << "Nhap ngay thang nam sinh: ";
	cin >> ngsinh;
	cout << "Nhap diem toan: ";
	cin >> toan; 
	cout << "Nhap diem van: ";
	cin >> van; 
	cout << "Nhap diem anh van: ";
	cin >> anh;
}

void Candidate::Xuat() {
	cout << "Ma so: " << id << endl;
	cout << "Ho ten: "<< hoten << endl;
	cout << "Ngay thang nam sinh: " << ngsinh << endl;
	cout << "Diem toan: " << toan << endl;
	cout << "Diem van: " << van << endl;
	cout << "Diem anh van: " << anh << endl;
}

float Candidate::TongDiem() {
	float sum;
	sum = toan + van + anh;
	return sum;
}