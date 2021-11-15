//#include <istream>
//#include <ostream>
//#include <iostream>
//#include "Vector.h"
//#include "Matrix.h"
//
//using namespace std;
//
//Matrix::Matrix() {
//	this->col = this->row = 0;
//	this->v = NULL;
//	/*cout << "Nhap so hang : "; cin >> n;
//	cout << "Nhap so cot : "; cin >> m;
//	v = new float* [n];
//	for (i = 0; i < n; i++)
//		v[i] = new float[m];
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//		{
//			cout << "v[" << i << j << "]: ";
//			cin >> v[i][j];
//		}*/
//}
//
//Matrix::Matrix(int row, int col) {
//	this->row = row;
//	this->col = col;
//	this->v = new Vector[row];
//}
//
////Matrix::Matrix(Matrix& a)
////{
////	row = a.row; 
////	col = a.col;
////	v = new int[row];
////	for (int i = 0; i < row; i++)
////		Vector v[i];
////	for (i = 0; i < n; i++)
////		for (j = 0; j < m; j++)
////			v[i][j] = a.v[i][j];
////}
//
//Matrix::~Matrix() {
//	delete[] v;
//}
//
//istream& operator>>(istream& is, Matrix& m) {
//	cout << "Number of rows: ";
//	is >> m.row;
//	cout << "Number of columns: ";
//	is >> m.col;
//	m.v = new float[m.row];
//	for (int i = 0; i < m.row; i++) {
//		m.v[i] = new Vector[m.col];
//		cout << "1";
//	}
//	return is;
//}
//
//ostream& operator<<(ostream& os, Matrix& m) {
//	for (int i = 0; i < m.row; i++)
//		os << m.v[i];
//	return os;
//}

#include "Matrix.h"
#include <iostream>
#include <cassert>

using namespace std;

Matrix::Matrix() {
	rows = 0;
	cols = 0;
	Mat = NULL;
}

Matrix::Matrix(const int& n_rows, const int& n_cols) {
	rows = n_rows;
	cols = n_cols;
	Mat = new int* [cols];
	for (int i = 0; i < rows; i++) {
		Mat[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			Mat[i][j] = 0;
}

Matrix::Matrix(const Matrix& other) {
	cols = other.cols;
	rows = other.rows;
	Mat = new int* [other.rows];
	for (int i = 0; i < other.rows; i++) {
		Mat[i] = new int[other.cols];
	}
	for (int i = 0; i < other.rows; i++)
		for (int j = 0; j < other.cols; j++)
			Mat[i][j] = other[i][j];
}

Matrix::~Matrix() {
	for (int i = 0; i < rows; i++)
		delete[] Mat[i];
	delete[] Mat;
}

int*& Matrix::operator[](const int& index) const {
	return  Mat[index];
}

void Matrix::operator=(const Matrix& other) {
	if (Mat != other.Mat && cols == other.cols && rows == other.rows) {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				Mat[i][j] = other.Mat[i][j];
	}
}

Matrix Matrix::operator-()const {
	Matrix temp(rows, cols);
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			temp.Mat[i][j] = Mat[i][j] * -1;
	return temp;
}


Matrix Matrix::operator+(const Matrix& other)const {
	Matrix temp(rows, cols);
	if (rows != other.rows || cols != other.cols) {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				temp.Mat[i][j] = Mat[i][j];
		return temp;
	}
	else {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				temp.Mat[i][j] += other.Mat[i][j] + Mat[i][j];
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix& other)const {
	if (cols != other.rows) {
		Matrix temp(cols, rows);
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				temp.Mat[i][j] = Mat[i][j];
		return temp;
	}
	else {
		Matrix temp(cols, other.rows);
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < other.cols; j++)
				for (int k = 0; k < cols; k++)
					temp[i][j] += Mat[i][k] * other.Mat[i][j];
		return temp;
	}
}

Matrix Matrix::operator*(const int& num)const {
	Matrix temp(rows, cols);
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			temp.Mat[i][j] = Mat[i][j] * num;
	return temp;
}

Matrix Matrix::operator-(const Matrix& other)const {
	Matrix temp(rows, cols);
	if (rows != other.rows || cols != other.cols) {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				temp.Mat[i][j] = Mat[i][j];
		return temp;
	}
	else {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				temp.Mat[i][j] += Mat[i][j] - other.Mat[i][j];
	}
	return temp;
}

ostream& operator<<(ostream& os, const Matrix& m) {
	for (int i = 0; i < m.rows; ++i) {
		for (int j = 0; j < m.cols; ++j) {
			os << m.Mat[i][j] << "  ";
		}
		os << '\n';
	}
	return os;
}
