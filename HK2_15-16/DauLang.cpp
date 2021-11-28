#include "DauLang.h"
#include <iostream>

using namespace std;

DauLang::DauLang(){}

DauLang::~DauLang(){}

void DauLang::nhap() {
	cout << "\n  BANG QUY UOC TRUONG DO " << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  | Input     |  0  |  1  |  2  |   3   |   4   |   5   |   6    |" << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  | Truong do |  4  |  2  |  1  |  1/2  |  1/4  |  1/8  |  1/16  |" << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  Nhap truong do: ";
	cin >> truongDo;
}

void DauLang::xuat(){
	cout << "Z" << dsTruongDo[truongDo];
}