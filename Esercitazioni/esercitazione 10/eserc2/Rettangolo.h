#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include "Quadrilatero.h"

class Rettangolo :public Quadrilatero{
      public:
             Rettangolo(double b=0,double h=0,const string& n="Rettangolo");
             virtual void draw()const;
             };

#endif
  
