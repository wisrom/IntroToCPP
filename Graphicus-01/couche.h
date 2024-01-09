/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#include "vecteur.h"

class Couche
{
private:
   int etat;
   float area;
   vecteur formes;
public:
   Couche();
   ~Couche();
   Forme* getShape(int index);
   Forme* clearShape(int index);
   bool translateCouche(int delta_x, int delta_y);
   bool resetCouche();
   void afficherCouche(ostream & s);
   bool changeEtat(int newEtat);
   int getEtat();
   double aireTotale();
   bool addForme(Forme* ptr_Forme);
};

#endif
