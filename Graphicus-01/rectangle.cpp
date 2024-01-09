#include <iostream>
#include "forme.h"
#include "rectangle.h"
using namespace std;

rectangle::rectangle()              //constructor
{
    //valeur prédéfinie pour la création du triangle
    cout<<"creation du rectangle en cours"<<endl;
    hauteur = 1;
    largeur = 1;
}
rectangle::rectangle(float h, float larg,int x1, int y1)
{
    cout<<"creation du rectangle defini cours"<<endl;
    hauteur = h;
    largeur = larg;
    ancrage.x = x1;
    ancrage.y = y1;
}
bool rectangle::estPositif(float mesure)
{
    if (mesure <= 0.0)
        return false;
    else
        return true;
}
rectangle::~rectangle()             //destructor
{
	cout<<"Destruction du rectangle"<<endl;
}
float rectangle::getHauteurRectangle()
{
    return hauteur;
}
void rectangle::setHauteurRectangle(float h)
{   
    if(estPositif(h) == true)
        hauteur = h;
    else
        hauteur = 0;
}
float rectangle::getLargeurRectangle()
{
    return largeur;
}
void rectangle::setLargeurRectangle(float largeur)
{
    if (estPositif(largeur)== true)
        largeur = 1;
    else
        largeur = 0;
}
double rectangle::aire()
{
    return(largeur*hauteur);
}
void rectangle::afficher(ostream & s)
{
    if (hauteur == 0 || largeur == 0)
        s << "Dimension de la forme invalide"<<endl;
    else 
    {
        s<<"Rectangle - Hauteur: "<< hauteur << ", Largeur: "<< largeur <<", Aire: "<< aire();
        s<<", Position ("<<ancrage.x<< "," << ancrage.y<<")"<<endl;
    }   
}
