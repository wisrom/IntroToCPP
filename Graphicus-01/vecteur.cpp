#include <iostream>
#include "vecteur.h"


using namespace std;

vecteur::vecteur()
{   
    size = 0;
    capacity = 1;
    formes = new Forme*[capacity];        
}
vecteur::~vecteur()
{
    clearVector();
}

int vecteur::sizeOfVec()
{
    return size;
}
int vecteur::CapacityOfVec()
{
    return capacity;
}
int vecteur:: doubleCapacityOfVec()
{
    Forme **tempo = formes;
    capacity*=2;
    formes = new Forme*[capacity];
    for (int i = 0; i < size; i++)
    {
        formes[i] = tempo[i];
    }
    delete[] tempo;
}
void vecteur::clearVector()
{
    for (int i = 0; i < size; i++)
    {
        delete formes[i];                  
    }
    delete[] formes;
    size = 0;
}
bool vecteur::isVecFull()
{
    if (size == capacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vecteur::isVecEmpty()
{
    if (size == 0)
        return true;
    else
    {
        return false;
    }
}
bool vecteur::addForme (Forme *ptr_forme)
{
    if (isVecFull() == true)
    {
        doubleCapacityOfVec();
        formes[size] = ptr_forme;                   //ajout du pointeur dans la nouvelle forme du tableau
        size++;
    }
    else
    {
        formes[size] = ptr_forme;                   //ajout du pointeur dans la nouvelle forme du tableau
        size++;
    }
    return true;
}  
void vecteur::afficherVecteur(ostream & s)
{
    if (isVecEmpty() == true)
    {
        s << "Capacity:"<< sizeOfVec() << ", Capacity: "<< CapacityOfVec() << endl;
    }
    else
    {
        s << "Capacity:"<< sizeOfVec() << ", Capacity: "<< CapacityOfVec() << endl;
        for (int i = 0; i < size; i++)
        {
            formes[i]->afficher(s);
        }
    }
    s<<endl;

}
Forme* vecteur::eraseItem(int index)
{
    if (index > size || index < 0)
    {
        Forme* ptr = NULL;
        return ptr;
    }
    else
    {
        Forme* p_addresse = formes[index];
        for (int i = 0; i < size - 1; i++)
        {
            formes[i] = formes[i+1];                    //copie les valeurs du vecteur suivant vers le vecteur avec l'index précédent
        }
        Forme* ptr = NULL;
        formes[size] = ptr;                             //assignation d'un pointeur Nul à l'ancienne position du dernier pointeur utilisé
        size--;
        return p_addresse;
    }
}

Forme* vecteur::obtainItem(int index)
{
    if (index < 0 || index > size)
    {
        Forme* ptr = NULL;
        return ptr;
    }
    else
    {
        Forme *p_addresse = formes[index];
        return p_addresse;
    }
}
