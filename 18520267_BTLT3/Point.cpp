#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(int x) {
	this->x = x;
	this->y = 0;
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

Point::Point(const Point& p) {
	this->x = p.x;
	this->y = p.y;
}

Point::~Point() {

}

void Point::input() {
	cout << "Nhap tung do: ";
	cin >> x;
	cout << "Nhap hoanh do: ";
	cin >> y;
}

void Point::move(int dx, int dy) {
	x += dx;
	y += dy;
}

void Point::display() {
	cout << "(" << x << "," << y << ")" << endl;
}

void Point::getX() {
	cout << "Hoanh do: " << this->x << endl;
}

void Point::getY() {
	cout << "Tung do: " << this->y << endl;
}