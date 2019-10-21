#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace  std;


/* Classe FORME */
void Forme::afficher() const
{
	cout<<"\nLa FORME a pour centre le point : \np : "<<this->centre<<"\nEt est de couleur "<<this->coul<<endl;
}
void Forme::deplacer(int, int) const
{
	cout<<"\nJe ne sais pas deplacer cette forme"<<endl;
}
Forme::~Forme() {/*cout<<"Appel au destructeur de Forme"<<endl;*/}


/* Classe TRIANGLE */
Triangle::Triangle(Point p1, Point p2, Point p3, string coul)
{
	this->p1=p1;
	this->p2=p2;
	this->p3=p3;
	this->coul=coul;
}
void Triangle::afficher() const
{
	cout<<"\nLe TRIANGLE a pour point : \np1 : "<<this->p1<<"\np2 : "<<this->p2<<"\np3 : "<<this->p3<<"\nEt est de couleur "<<this->coul<<endl;
}
