#pragma once
class Candidate
{
private:
	int id;
	char hoten[20];
	char ngsinh[11];
	float toan;
	float van;
	float anh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
};

