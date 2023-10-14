#ifndef PIAZZOLA_H
#define PIAZZOLA_H

#include "Posto.h"

#include <iostream>
using std::ostream;
using std::istream;

class Piazzola:public Posto{
      friend ostream& operator<<(ostream& o,const Piazzola& p);
      friend istream& operator>>(istream& i,Piazzola& p);
      public:
             Piazzola(int I=-1,double pr=0,bool occup=false,double lung=0,double larg=0,bool acq=false,bool luc=false);
             void setLunghezza();
             void setLarghezza();
             void setAcqua();
             void setLuce();
             virtual void print();
      private:
              double lunghezza,larghezza;
              bool acqua,luce;
      };

ostream& operator<<(ostream& o,const Piazzola& p);
istream& operator>>(istream& i,Piazzola& p);

#endif
