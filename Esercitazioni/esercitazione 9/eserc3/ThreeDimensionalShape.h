#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "TwoDimensionalShape.h"

class ThreeDimensionalShape :public TwoDimensionalShape{
      public:
             ThreeDimensionalShape(double b=0,double h=0,double l=0,const string& n="no name");
             void setLarghezza(double d);
             double getLarghezza()const;
             void print()const;
      private:
             double larghezza;
      };

#endif
