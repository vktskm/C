#ifndef TRAPEZIO_H
#define TRAPEZIO_H

#include "Quadrilatero.h"



class Trapezio :public Quadrilatero{
      public:
             Trapezio(double b=0,double h=0,double secondaBas=0,const string& n="Trapezio");
             void setSecondaBase(double b);
             double getSecondaBase();
             void print();
                       
      private:
              double secondaBase;
             };

#endif
