#ifndef ELLISSE_H
#define ELLISSE_H

#include "TwoDimensionalShape.h"
 
class Ellisse :public TwoDimensionalShape{
      public:
             Ellisse(double b=0,double h=0,const string& n="Ellisse");
             virtual void draw()const;
      private:
             };

#endif
 
