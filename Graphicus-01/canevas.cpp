/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"
#include "couche.h"
using namespace std; 

Canevas::Canevas()
{
   Couche couches[MAX_COUCHES];
   aireTotale = 0;
}

Canevas::~Canevas()
{
   cout<<"Destruction du Canevas"<<endl;
}

bool Canevas::reinitialiser()
{
   for (int i = 0; i <= MAX_COUCHES; i++)
   {
   couches[i].resetCouche();
   }
   couches[0].changeEtat(2);
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
   if (couches[index].getEtat()!=3)
   {
      couches[index].resetCouche(); 
      return true;
   }
   else
      return false;
}

bool Canevas::activerCouche(int index)
{
   int etat;
   if (index > MAX_COUCHES || index < 0)
      return false;
   else
      for (int i = 0; i < MAX_COUCHES;i++)
      {
         etat = couches[i].getEtat();
         if (etat == 2)
         {
            couches[i].changeEtat(3);
         }
         couches[index].changeEtat(2);
      return true;
      }
}

bool Canevas::desactiverCouche(int index)
{
   if (index > MAX_COUCHES || index < 0)
   {   
      
      return false;
   }
   else
      couches[index].changeEtat(4);
      return true;
}  
bool Canevas::ajouterForme(Forme *p_forme)
{
   int coucheActive;
   
   for(int i = 0; i < MAX_COUCHES;i++)
   {
      if (couches[i].getEtat()==2)
      {
         coucheActive = i;
      }
   couches[coucheActive].addForme(p_forme);
   return true;
   }
}
bool Canevas::retirerForme(int index)
{
   if (couches[index].getEtat()== 2)
   {
      for (int i = 0; i < MAX_COUCHES; i++)
      {
         couches[index].clearShape(index);
      }
      return true;
   }
   else
      return false;
}

double Canevas::aire()
{
   for (int i = 0; i <= 5; i++)
   {
      float somme = 0;
      somme += couches[i].aireTotale();
      return somme;
   }
}

bool Canevas::translater(int deltaX, int deltaY)
{
   for(int i = 0; i <= 5; i++)
   {
      if (couches[i].getEtat()==2)
      {
         couches[i].translateCouche(deltaX, deltaY);
         return true;
      }
   }
   return false;
}

void Canevas::afficher(ostream & s)
{
   s<<"-----Couche 0-----"<<endl;
   couches[0].afficherCouche(s);
   s<<"-----Couche 1-----"<<endl;
   couches[1].afficherCouche(s);
   s<<"-----Couche 2-----"<<endl;
   couches[2].afficherCouche(s);
   s<<"-----Couche 3-----"<<endl;
   couches[3].afficherCouche(s);
   s<<"-----Couche 4-----"<<endl;
   couches[4].afficherCouche(s);
   s<<endl;
}
