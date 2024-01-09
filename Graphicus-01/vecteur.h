
#include <iostream>
#include "forme.h"

using namespace std;

class vecteur{
    
// on utilise ** pour pointer un pointeur d'un pointeur.

protected: 
    int capacity;                           //connaitre la capacité du vecteur 
    int size;                               //connaitre la taille réelle du vecteur 
    Forme** formes;                         //stocké sous pointeur de forme 
public: 
    vecteur();                              //item stocké en mémoire
    ~vecteur();
    int sizeOfVec();
    int CapacityOfVec();                    //connaitre la capacité du vecteur 
    int doubleCapacityOfVec();              //Doubler la capacité du vecteur 
    void clearVector();                     //vider le vecteur
    bool isVecFull();                       //vérifier l'état plein du vecteur
    bool isVecEmpty();                      //vérifier l'état vide du vecteur
    bool addForme (Forme *ptr_forme);
    Forme* eraseItem(int index);
    Forme* obtainItem(int index);
    void afficherVecteur(ostream & s);
};



