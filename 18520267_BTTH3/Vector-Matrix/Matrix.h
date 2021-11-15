//#pragma once
//#include <istream>
//#include <ostream>
//#include "Vector.h"
//
//using namespace std;
//
//class Matrix
//{
//private:
//	int row, col;
//	float *v;
//public:
//	Matrix();
//	Matrix(int row, int col);
//	Matrix(Matrix& a);
//	~Matrix();
//	/*void display();
//	int ktra(Matrix& a);*/
//	Matrix operator*(Matrix a);
//	Matrix operator*(Vector b);
//	friend istream& operator>>(istream& is, Matrix& m);
//	friend ostream& operator<<(ostream& os, Matrix& m);
//};

#include <iostream>

using namespace std;

class Matrix
{
private:
	int rows;
	int cols;
	int** Mat;

public:
	Matrix();
	Matrix(const int& rows, const int& cols);
	Matrix(const Matrix& other);
	~Matrix();
	int*& operator[](const int& index) const;
	void operator=(const Matrix& other);
	Matrix operator-()const;
	Matrix operator-(const Matrix& other)const;
	Matrix operator+(const Matrix& other)const;
	Matrix operator*(const Matrix& other)const;
	Matrix operator*(const int& num)const;

	int getMatrixRows(const Matrix& other) { return other.rows; }
	int getMatrixCols(const Matrix& other) { return other.cols; }

	friend Matrix operator*(const int& num, const Matrix& m) {
		return (m * num);
	}

	friend Matrix operator+(const int& num, const Matrix& t) {
		return (num + t);
	}

	friend ostream& operator<<(ostream& os, const Matrix& m);
	friend istream& operator>>(istream& is, const Matrix& m);
};