#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int x);
	Point(int x, int y);
	Point(const Point& p);
	~Point();

	//void init(int ox, int oy);
	void input();
	void display();
	void getY();
	void getX();
	void move(int dx, int dy);
};

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

//void Point::init(int ox, int oy) {
//	cout << "Ham khoi tao" << endl;
//	x = ox;
//	y = oy;
//}

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

void main() {
	Point p1, p2(2, 3), p3(p2);

	cout << "Nhap toa do diem p1" << endl;
	p1.input();
	cout << "\nToa do cac diem" << endl;
	cout << "p1: ";
	p1.display();
	cout << "p2: ";
	p2.display();
	cout << "p3: ";
	p3.display();

	cout << "\nDi chuyen diem p2" << endl;
	p2.move(1, 1);
	p2.display();

	cout << "\nXuat hoanh do tung do diem p3" << endl;
	p3.getX();
	p3.getY();
}

