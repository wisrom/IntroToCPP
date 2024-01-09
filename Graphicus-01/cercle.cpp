#include "cercle.h"
#include <iostream>
using namespace std;

Cercle::Cercle()
{
    rayon = 1;
}
Cercle::Cercle(int x1, int y1, float r)
{
    rayon = r;
    ancrage.x = x1;
    ancrage.y = y1;
}
Cercle::~Cercle()
{
    cout<<"supression des donnees"<<endl;
}
float Cercle::getRayon()
{
    return(rayon);
} 
bool Cercle::estPositif(float rayon)
{
    if (rayon<= 0)
        return false;
    else
        return true;
}
float Cercle::setRayon(float r)
{
    if (estPositif(r) == true)
    r = rayon;
    
    else
    {
        rayon = 0;
    }
    return r;
    
}
double Cercle::aire()
{   
    return(3.1415*rayon*rayon);
}
void Cercle::afficherCercle(ostream & s)
{
    if (rayon == 0)
        cout<<"rayon invalide"<<endl;
    else
        cout<<"Cercle : ("<<ancrage.x<<","<<ancrage.y<<", aire:"<<aire()<<")"<<endl; 

    cout<<"Cercle: ("<<endl;
}

