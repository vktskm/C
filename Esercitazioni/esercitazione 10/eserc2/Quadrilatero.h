#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include "TwoDimensionalShape.h"

class Quadrilatero :public TwoDimensionalShape{
      public:
             Quadrilatero(double b=0,double h=0,const string& n="Quadrilatero");
             virtual void draw()const;
      private:
             };

#endif
 
