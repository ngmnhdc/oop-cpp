#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(float x) {
	this->x = x;
	this->y = 0;
}

Point::Point(float x, float y) {
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

void Point::display() {
	cout << "\t(" << x << "," << y << ")" << endl;
}

void Point::getX() {
	cout << "Hoanh do: " << this->x << endl;
}

void Point::getY() {
	cout << "Tung do: " << this->y << endl;
}

void Point::set(float _x, float _y) {
	this->x = _x;
	this->y = _y;
}

void Point::set(const Point& p) {
	this->x = p.x;
	this->y = p.y;
}

void Point::move(float dx, float dy) {
	x += dx;
	y += dy;
}

void Point::rotate(float alpha) {
	float _x = x * cos(alpha) - y * sin(alpha);
	float _y = x * sin(alpha) + y * cos(alpha);
	this->set(_x, _y);
}

void Point::zoom(float k) {
	x *= k;
	y *= k;
}