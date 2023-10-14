#ifndef ALIANTE_H
#define ALIANTE_H

#include "Aeromodello.h"

class Aliante:public Aeromodello{
      public:
             Aliante(string id="",double lat=0,double longit=0,double alt=0,
             double deltaLa=0,double deltaLon=0,double deltaAl=0,
             double pTC=0,double pTP=0,double pes=0);
             
             virtual void Modifica();
             
             virtual void print();

      private:
              double peso;
      };

#endif
