#ifndef MOTORE_H
#define MOTORE_H

#include "Aeromodello.h"

class Motore:public Aeromodello{
      public:
             Motore(string id="",double lat=0,double longit=0,double alt=0,
             double deltaLa=0,double deltaLon=0,double deltaAl=0,
             double pTC=0,double pTP=0,double pot=0);
             
             virtual void Modifica();
             
             void setPotenza(double pot);
             
             virtual void print();
      private:
              double potenza;
      
      };

#endif
