#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>
using namespace std;

TestCandidate::TestCandidate() {
	this->n = 0;
	this->ds = NULL;
}

TestCandidate::TestCandidate(int n) {
	this->n = n;
	this->ds = new Candidate[n];
}

TestCandidate::~TestCandidate() {
	delete[] ds;
}

void TestCandidate::NhapN() {
	
	for (int i = 0; i < n; i++) {
		ds[i].Nhap();
	}
}

void TestCandidate::TongDiemTren15() {
	cout << "\nDANH SACH THI SINH TREN 15 DIEM" << endl;
	for (int i = 0; i < n; i++) {
		if (ds[i].TongDiem() >= 15) {
			ds[i].Xuat();
		}
	}
}