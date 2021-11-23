#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include <vector>

using namespace std;
//
//void Input(vector<Polygon*>& List) {
//	int CatchKey;
//	do {
//		cout << "\t+ - - - CHOOSE POLYGON TYPE - - - +";
//		cout << "\t| Press 1 to input Triangle.      |\n";
//		cout << "\t| Press 2 to input Quadrangle.    |\n";
//		cout << "\t| Press 3 to input Parallelogram. |\n";
//		cout << "\t| Press 4 to input Rectangle.     |\n";
//		cout << "\t| Press 5 to input Square.        |\n";
//		cout << "\t| Press 6 to exit.                |\n";
//		cout << "\t+ - - - - - - - - - - - - - - - - +";
//		while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4 && CatchKey != 5 && CatchKey != 6)
//		{
//			cout << "Just Press in range 1,2,3,4,5,6. Again: ";
//		}
//		switch (CatchKey)
//		{
//		case 1:
//			List.push_back(new Quadrangle);
//			List[List.size() - 1]->Input();
//			break;
//		case 2:
//			List.push_back(new Triangle);
//			List.back()->Input();
//			break;
//		case 3:
//			List.push_back(new Parallelogram);
//			List.back()->Input();
//			break;
//		case 4:
//			List.push_back(new Rectangle);
//			List.back()->Input();
//			break;
//		case 5:
//			List.push_back(new Square);
//			List.back()->Input();
//			break;
//		default:
//			break;
//		}
//	} while (CatchKey != 6);
//}
//
//void Display(vector<Polygon*>& List) {
//	cout << "\n----- Display List Polygons ----\n";
//	for (int i = 0; i < List.size(); i++) {
//		List[i]->Display();
//		cout << endl;
//	}
//	cout << "--------------------------------\n";
//}
//
//void Move(vector<Polygon*>& List) {
//	cout << "Input vector (x, y) to move: ";
//	int x, y;
//	cin >> x >> y;
//	for (int i = 0; i < List.size(); i++) {
//		List[i]->Move(x, y);
//	}
//}

int main() {
	vector<Polygon*> ListPolygons;
	ListPolygons.resize(0);
	int CatchKey;
	do {
		cout << "\t+ - - - - - - - - - - - - - - - - - - - - - - - - - - +";
		cout << "\t| Press 1 to input list of polygon.					 |\n";
		cout << "\t| Press 2 to display and move all list of polygons.	 |\n";
		cout << "\t| Press 3 to exit.									 |\n";
		cout << "\t+ - - - - - - - - - - - - - - - - - - - - - - - - - - +\n";
		while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3)
		{
			cout << "Just Press in range 1,2,3. Again: ";
		}
		//	switch (CatchKey)
		//	{
		//	case 1:
		//		//Input(ListPolygons);
		//		break;
		//	case 2:
		//		//Display(ListPolygons);
		//		char x;
		//		cout << "Move? (y,n): ";
		//		while (cin >> x && x != 'n' && x != 'y') {
		//			cout << "Just Press y or n!Again.\n";
		//		}
		//		if (x == 'y') {
		//			//Move(ListPolygons);
		//		}
		//		break;
		//	default:
		//		break;
		//	}
		//} while (CatchKey != 3);
		//for (int i = 0; i < ListPolygons.size(); i++) {
		//	delete ListPolygons[i];
		//}
		//cout << "Thanks!";
		//return 0;
	} while (1);
}