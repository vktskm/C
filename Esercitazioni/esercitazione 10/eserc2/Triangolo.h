#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include "TwoDimensionalShape.h"

class Triangolo :public TwoDimensionalShape{
      public:
             Triangolo(double b=0,double h=0,const string& n="Triangolo");
             virtual void draw()const;
      private:
             };

#endif
