#ifndef CILINDROELLITTICO_H
#define CILINDROELLITTICO_H

#include "ThreeDimensionalShape.h"

//'base' e 'altezza' del cilindro ellittico sono le dimensioni dell'ellissi
//che forma la base del cilindro. La 'larghezza' sarebbe invece la lunghezza
//del corpo del cilindro
class CilindroEllittico :public ThreeDimensionalShape{
      public:
             CilindroEllittico(double b=0,double h=0,double l=0,const string& n="Cilindro ellittico (che ha per base un'ellissi)"):ThreeDimensionalShape(b,h,l,n){};
      private:
             };

#endif
