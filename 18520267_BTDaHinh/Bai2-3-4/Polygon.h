#pragma once
#include <vector>
using namespace std;
struct Point
{
	int x;
	int y;
};

class Polygon
{
private:
	int NumVertices;
	vector<Point> Coordinate;
public:
	Polygon();
	Polygon(int n);
	virtual ~Polygon();

	void SetNumVertices(int num);
	void SetCoor(vector<Point> coor);
	//virtual void Set();

	int GetNumVertices() { return NumVertices; }
	vector<Point> GetCoor() { return Coordinate; }

	void Input();
	bool Check();
	void Display();
	void Move(int dx, int dy);
};