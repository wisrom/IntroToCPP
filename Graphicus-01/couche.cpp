/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
#include <iostream>
Couche::Couche()
{
    //état: 1-Initialisee   2-Active   3-Inactive   4-Cachee
    etat = 1;
    area = 0;
}
Couche::~Couche()
   {
    cout<<"Destruction de la couche"<<endl;
   }
Forme* Couche::getShape(int index)
{
    if (index < 0; index > formes.sizeOfVec())
    {
        Forme* ptr = NULL;
        return ptr;
    }
    else
    {
        return formes.obtainItem(index);
    }
}
Forme* Couche::clearShape(int index)
{
    if (etat == 2 && index >= 0 && index < formes.sizeOfVec())
    {
        return formes.eraseItem(index);
    }
    else
    {
        Forme* ptr = NULL;
        return ptr;
    }
}   
bool Couche::translateCouche(int delta_x, int delta_y)
{
    if (etat == 2)
    {
        for (int i = 0; i < formes.sizeOfVec();i++)
        {
            formes.obtainItem(i)->translater(delta_x,delta_y);
        }
        return true;
    }
    else
    {
        return false;
    }
}   
bool Couche::resetCouche()
{
    formes.clearVector();       //efface tout et remet comme avant
    etat = 1;
    return true;
}
void Couche::afficherCouche(ostream & s)
{
    if (etat == 1)
    {
        s<<"Couche initialisee"<<endl;
    }
    if (etat ==2)
    {
        s<<"Couche active"<<endl;
        if (formes.sizeOfVec() == 0)
        {
            s<<"c'est vide"<<endl;
        }
        else
        {
            s<<endl;
            formes.afficherVecteur(s);
        }
    }
    if (etat ==3)
    {
        s<<"La couche est innactive"<<endl;
        if (formes.sizeOfVec() == 0)
        {
            s<<"c'est vide"<<endl;
        }
        else
        {
            s<<endl;
            formes.afficherVecteur(s);
        }
    }
    if (etat == 4)
    {
        s<<"la couche est cachee"<<endl;
    }
}
bool Couche::changeEtat(int newEtat)
{
    if (newEtat < 1 || newEtat > 4)
    {
        return false;
    }
    else
    {
        etat = newEtat;
        return true;
    }
}

int Couche::getEtat()
{
    return etat;
}
double Couche::aireTotale()
{
    area = 0;
    for (int i = 0; i < formes.sizeOfVec();i++)
    {
        Forme* ptr_Forme = formes.obtainItem(i);
        area+= (ptr_Forme->aire());
    }
    return area;
}

bool Couche::addForme(Forme* ptr_Forme)
{
    if (etat ==2)
    {
        formes.addForme(ptr_Forme);
        return true;
    }
    else
    {
        return false;
    }
}


