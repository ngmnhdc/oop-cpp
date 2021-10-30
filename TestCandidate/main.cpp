#include <iostream>
//#include "Candidate.h"
#include "TestCandidate.h"
using namespace std;

void main() {
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	TestCandidate t(n);
	t.NhapN();
	t.TongDiemTren15();
}