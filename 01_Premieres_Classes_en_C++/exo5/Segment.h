#ifndef Segment_h
#define Segment_h

class Segment{
	private :
		Point orig;
		Point dest;
	public :
		Segment();
		Segment(int x1, int y1, int x2, int y2);
		Segment(Point p1, Point p2);
		int longueur();
		void estVertical();
		void estHorizontal();
		void estSurDiagonale();
		~Segment();
		~Segment(int x1, int y1, int x2, int y2);
		~Segment(Point p1, Point p2);
};

#endif
