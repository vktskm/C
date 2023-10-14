#ifndef QUADRATO_H
#define QUADRATO_H

#include "Rettangolo.h"

class Quadrato :public Rettangolo{
      public:
             Quadrato(double b=0,double h=0,const string& n="Quadrato");
             void setLato(double l);
             virtual void draw()const;
             void interagisciUtente();
      private:
             };
 
#endif
