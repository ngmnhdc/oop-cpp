#include <iostream>
#include <cstring>

using namespace std;

struct NhanVien
{
	char manv[9];
	char hoten[20];
	int phongban;
	int luongcb;
	int thuong;
	int thuclanh;
};

void Nhap(NhanVien &nv) {
	fflush(stdin);
	cout << "Nhap ma nhan vien: ";
	cin >> nv.manv;
	fflush(stdin);
	cout << "Nhap ho ten: ";
	cin >> nv.hoten;
	fflush(stdin);
	cout << "Nhap phong ban: ";
	cin >> nv.phongban;
	cout << "Nhap luong co ban: ";
	cin >> nv.luongcb;
	cout << "Nhap thuong: ";
	cin >> nv.thuong;

}

void NhapNhanVien(NhanVien nv[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "-------------------------------------\n";
		Nhap(nv[i]);
	}
}

void Xuat(NhanVien nv) {
	cout << "Ma nhan vien: " << nv.manv << endl;
	cout << "Ho ten: " << nv.hoten << endl;
	cout << "Phong ban: " << nv.phongban << endl;
	cout << "Luong co ban: " << nv.luongcb << endl;
	cout << "Thuong: " << nv.thuong << endl;
	cout << "Thuc lanh: " << nv.luongcb + nv.thuong << endl;
}

void XuatNhanVien(NhanVien nv[], int n) {

	for (int i = 0; i < n; i++) {
		Xuat(nv[i]);
	}
}


int TongTL(NhanVien nv[], int n) {
	int result = 0;
	for (int i = 0; i < n; i++) {
		nv[i].thuclanh = nv[i].luongcb + nv[i].thuong;
		result += nv[i].thuclanh;
	}
	return result;
}

int MinLuongCB(NhanVien nv[], int n)
{
	int i;
	int min = nv[0].luongcb;
	for (i = 0; i < n - 1; i++)
	{
		if (min > nv[i].luongcb)
		{
			min = nv[i].luongcb;
		}
	}
	return min;
}

void NhanVienMinLuongCB(NhanVien nv[], int n) {
	int min = MinLuongCB(nv, n);
	for (int i = 0; i < n; i++) {
		if (nv[i].luongcb == min) {
			Xuat(nv[i]);
		}
	}
}

void Dem(NhanVien nv[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (nv[i].thuong >= 1200000)
		{
			count++;
		}
	}
	cout << "Co " << count << " nhan vien co muc thuong >= 1200000 " << endl;
}

void HoanVi(NhanVien &a, NhanVien &b) {
	NhanVien tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void SapXep(NhanVien nv[], int n) {
	NhanVien tmp;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (nv[i].phongban > nv[j].phongban) {
				HoanVi(nv[i], nv[j]);
			} 
			if (nv[i].phongban == nv[j].phongban) {
				if (nv[i].manv < nv[j].manv) {
					HoanVi(nv[i], nv[j]);
				}
			}
		}
	}
	XuatNhanVien(nv, n);
}

int main() {
	int n;
	NhanVien nv[100];
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	NhapNhanVien(nv, n);
	cout << "----------------------------------------------------------\n";
	cout << "Tong thuc lanh cua tat ca nhan vien: " << TongTL(nv, n) << endl;
	cout << "----------------------------------------------------------\n";
	cout << "Cac nhan vien co luong co ban thap nhat: " << endl;
	NhanVienMinLuongCB(nv, n);
	cout << "----------------------------------------------------------\n";
	Dem(nv, n);
	cout << "----------------------------------------------------------\n";
	SapXep(nv, n);
}