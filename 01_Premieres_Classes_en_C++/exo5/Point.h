#ifndef Point_h
#define Point_h

class Point{
	public :
		int x, y;
		Point();
		Point(int xcoord, int ycoord);
		Point(Point* p);
		void afficher();
		void cloner(const Point &);
		~Point(); //destructeur
};

#endif
