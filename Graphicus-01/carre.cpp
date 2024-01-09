#include"carre.h"
#include <iostream>
using namespace std;

Carre::Carre()
{
    longueur = 1;
}
    
Carre::Carre(int x1, int y1, float lon)
{
    longueur = lon;
    ancrage.x = x1;
    ancrage.y = y1;
}
Carre::~Carre()
{
    cout<<"destruction du carre"<<endl;
}

float Carre::getLongueurCarre()
{
    return longueur;
}
void Carre::setLongueurCarre(float lon)
{
    if (estPositif(lon) == true)
        lon = longueur;
    else
        longueur = 0;
}
double Carre::aire()
{
    return (longueur*longueur);
}

void Carre::afficherCarre(ostream & s)
{
    if (longueur ==0 )
    {
        s<<"La longueur est invalide."<<endl;
    }
    else
    {
    s<<"Longueur: "<< longueur<< ", Aire: "<< aire();
    s<<"Position: ("<<ancrage.x<<","<<ancrage.y<<")"<<endl;
    }
}
