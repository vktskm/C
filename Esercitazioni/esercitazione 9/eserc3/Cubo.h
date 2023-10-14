#ifndef CUBO_H
#define CUBO_H

#include "Parallelepipedo.h"

class Cubo :public Parallelepipedo{
      public:
             Cubo(double b=0,const string& n="Cubo"):Parallelepipedo(b,b,b,n){};
      private:
             };

#endif
