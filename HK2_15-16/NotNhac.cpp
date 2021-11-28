#include "NotNhac.h"
#include <iostream>

using namespace std;

NotNhac::NotNhac(){
	caoDo = 0;
}

NotNhac::~NotNhac(){}

void NotNhac::nhap() {
	cout << "\n  BANG QUY UOC CAO DO " << endl;
	cout << "  +--------+-------+-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  | Input  |   0   |   1   |   2   |   3   |   4   |   5   |   6   |" << endl;
	cout << "  +--------+-------+-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  | Cao do | C(Do) | D(Re) | E(Mi) | F(Fa) | G(Sol)| A(La) | B(Si) |" << endl;
	cout << "  +--------+-------+-------+-------+-------+-------+-------+-------+" << endl;
	cout << "  Nhap cao do: ";
	cin >> caoDo;

	cout << "\n  BANG QUY UOC TRUONG DO " << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  | Input     |  0  |  1  |  2  |   3   |   4   |   5   |   6    |" << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  | Truong do |  4  |  2  |  1  |  1/2  |  1/4  |  1/8  |  1/16  |" << endl;
	cout << "  +-----------+-----+-----+-----+-------+-------+-------+--------+" << endl;
	cout << "  Nhap truong do: ";
	cin >> truongDo;
}

void NotNhac::xuat(){
	cout << dsCaoDo[caoDo] << dsTruongDo[truongDo];
}

int NotNhac::getCaoDo() {
	return caoDo;
}