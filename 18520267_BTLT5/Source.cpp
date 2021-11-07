// Công ty có hai loại nhân viên: Nhân viên văn phòng và Nhân viên sản xuất. 
// Viết chương trình quản lý và tính lương cho từng nhân viên của công ty:
// Mỗi nhân viên cần quản lý các thông tin sau: Họ tên, ngày sinh, lương.
// Công ty cần tính lương cho nhân viên như sau:
// - Đối với nhân viên sản xuất: Lương = lương căn bản + số sản phẩm * 5.000
// - Đối nhân viên văn phòng: Lương = số ngày làm việc * 100.000

#include "NhanVien.h"
#include "NhanVienSX.h"
#include "NhanVienVP.h"
#include "CongTy.h"
#include <iostream>

using namespace std;

void main() {
	CongTy ct;
	ct.NhapDSNV();
	ct.XuatDSNV();
}