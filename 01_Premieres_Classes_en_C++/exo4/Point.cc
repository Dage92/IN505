#include <iostream>
#include "Point.h"

using namespace std;

//Initialisation des coordonnees du point a deux valeur defaut.
Point::Point(){
	x = 0;
	y = 0;
}

//Affectation aux coords deux valeurs donnees en parametre.
Point::Point(int xcoord, int ycoord){
	x = xcoord;
	y = ycoord;
};

//Affectation aux coords les coords d'un point donnes.
Point::Point(Point* p){
	x = p->x;
	y = p->y;
};

/*Point::~Point(){
	delete &x;
	delete &y;
}*/

//Fonction qui permet d'afficher le point
//void Point::afficher(){
//	cout << "Coord x: " << .x << endl << "Coord y: " << Point.y << endl;
//};
