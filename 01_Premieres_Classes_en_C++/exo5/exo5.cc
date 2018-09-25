using namespace std;
#include <iostream>
#include "Point.h"
#include "Segment.h"

int main ()
{
	Point p1, p2;
	
	p1 = Point();
	cout << "1) Coord x: " << p1.x << endl << "   Coord y: " << p1.y << endl;
	
	p2 = Point(3,4);
	cout << "2) Coord x: " << p2.x << endl << "   Coord y: " << p2.y << endl;
	
	p1 = Point(p2);
	cout << "3) Coord x: " << p1.x << endl << "   Coord y: " << p1.y << endl;

	//~Point();
	
	return 0;
}
