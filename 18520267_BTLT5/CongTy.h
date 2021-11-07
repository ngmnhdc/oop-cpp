#pragma once
#include <iostream>
#include "NhanVienSX.h"
#include "NhanVienVP.h"

class CongTy
{
private:
	int slsx, slvp;
	NhanVienSX* nvsx;
	NhanVienVP* nvvp;
public:
	CongTy();
	~CongTy();
	void NhapDSNV();
	void XuatDSNV();
};

