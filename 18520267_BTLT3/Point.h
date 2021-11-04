#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x);
	Point(int x, int y);
	Point(const Point& p);
	~Point();

	void input();
	void display();
	void getX();
	void getY();
	void move(int dx, int dy);
};

