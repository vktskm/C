#ifndef CILINDRO_H
#define CILINDRO_H

#include "CilindroEllittico.h"

//la 'diam' del cilindro è il diametro della circonferenza di base.
//La 'larghezza' sarebbe invece la lunghezza
//del corpo del cilindro.
class Cilindro :public CilindroEllittico{
      public:
             Cilindro(double diam=0,double l=0,const string& n="Cilindro");
             double getDiametro()const;
             void setDiametro(double diam);
             void print()const;
      private:
             };

#endif
