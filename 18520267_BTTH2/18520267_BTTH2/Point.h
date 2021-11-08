#pragma once
class Point
{
private:
	float x;
	float y;
public:
	Point();
	Point(float x);
	Point(float x, float y);
	Point(const Point& p);
	~Point();

	void input();
	void display();
	void set(float _x, float _y);
	void set(const Point& p);
	void getX();
	void getY();
	void move(float dx, float dy);
	void rotate(float alpha);
	void zoom(float k);
};

