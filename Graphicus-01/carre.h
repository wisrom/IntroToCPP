#include"rectangle.h"
#include <iostream>
using namespace std;

class Carre : public rectangle
{
protected:
    float longueur;
public:
    Carre();
    Carre(int x1, int y1, float lon);
    ~Carre();

    float getLongueurCarre();
    void setLongueurCarre(float lon);
    double aire();
    void afficherCarre(ostream & s);
};