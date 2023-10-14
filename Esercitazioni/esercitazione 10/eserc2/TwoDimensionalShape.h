#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape :public Shape{
      public:
             TwoDimensionalShape(double b=0,double h=0,const string& n="no name");
             void setBase(double d);
             double getBase()const;
             void setAltezza(double d);
             double getAltezza()const;
             void print()const;
             virtual void draw()const=0;
             void interagisciUtente();
      private:
             double base,altezza;
      };

#endif
 
