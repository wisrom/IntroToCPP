#include <iostream>
#include "forme.h"

class Cercle : public Forme
{
    private:
        float rayon;
    public:
        Cercle();                                   //constructeur avec valeur prédéfinie
        Cercle(int x1,int y1,float r);          //constructeur avec valeur modifiée
        ~Cercle();                                  //destructeur
        float getRayon();
        float setRayon(float r);
        double aire();
        void afficherCercle(ostream & s);
        bool estPositif(float rayon);
};