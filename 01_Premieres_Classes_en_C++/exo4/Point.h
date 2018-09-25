#ifndef x_h
#define x_h

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
