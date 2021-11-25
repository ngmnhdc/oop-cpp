#include <iostream>
#include "NongTrai.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

using namespace std;

NongTrai::NongTrai() {
    List.resize(3);
}

NongTrai::~NongTrai() {}

void NongTrai::nhap() {
    int CatchKey;
    do {
        cout << "\t+------ NHAP DANH SACH GIA SUC ------+\n";
        cout << "\t|  1. Nhap them Bo vao danh sach.    |\n";
        cout << "\t|  2. Nhap them Cuu vao danh sach.   |\n";
        cout << "\t|  3. Nhap them De vao danh sach.    |\n";
        cout << "\t|  4. Thoat.                         |\n";
        cout << "\t+------------------------------------+\n";
        while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4)
        {
            cout << "Khong hop le! Vui long nhap lai.\n";
        }
        switch (CatchKey)
        {
        case 1:
            int m;
            cout << "Nhap so luong Bo: ";
            cin >> m;
            //List[0].resize(m);
            for (int i = 0; i < m; i++) {
                List[0].push_back(new Bo);
            }
            break;
        case 2:
            int n;
            cout << "Nhap so luong Cuu: ";
            cin >> n;
            List[1].resize(0);
            for (int i = 0; i < n; i++) {
                List[1].push_back(new Cuu);
            }
            break;
        case 3:
            int p;
            cout << "Nhap so luong De: ";
            cin >> p;
            List[2].resize(0);
            for (int i = 0; i < p; i++) {
                List[2].push_back(new De);
            }
            break;
        default:
            break;
        }
    } while (CatchKey != 4);
}

void NongTrai::xuatTiengKeu() {
    cout << "\n------- XUAT TIENG KEU ------\n";
    for (int i = 0; i < List.size(); i++) {
        for (int j = 0; j < List[i].size(); j++) {
            cout << "    ";
            List[i][j]->keu();
        }
    }
}

void NongTrai::thongKe() {
    int tongSoCon[3] = { 0 }, tongSoLitSua[3] = { 0 };
    cout << "\n----- THONG KE SO LUONG -----\n";
    for (int i = 0; i < List.size(); i++) {
        for (int j = 0; j < List[i].size(); j++) {
            tongSoCon[i] += List[i][j]->getSoCon() + 1;
            tongSoLitSua[i] += List[i][j]->getSoLitSua();
        }
    }
    cout << "  Bo: " << tongSoCon[0] << " con va " << tongSoLitSua[0] << " lit sua." << endl;
    cout << "  Cuu: " << tongSoCon[1] << " con va " << tongSoLitSua[1] << " lit sua." << endl;
    cout << "  De: " << tongSoCon[2] << " con va " << tongSoLitSua[2] << " lit sua." << endl;
}