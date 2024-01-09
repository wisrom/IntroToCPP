#include <iostream>
#include "forme.h"
using namespace std;

class rectangle : public Forme
{
private:
    float hauteur;
    float largeur;
public:
    rectangle();
    rectangle(float h, float larg,int x1, int y1); // assigne le point en bas a gauche du rectangle aka l'ancrage
    virtual ~rectangle();               //destructeur qui est virtuel	
    float getHauteurRectangle();
    void setHauteurRectangle(float hauteur);
    float getLargeurRectangle();
    void setLargeurRectangle(float largeur);
    bool estPositif(float mesure);
    virtual double aire();
    virtual void afficher(ostream & s);
}; 