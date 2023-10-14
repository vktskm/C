#ifndef MERCANTILI_H
#define MERCANTILI_H

#include <iostream>
using std::ostream;
using std::istream;

#include "Natante.h"

class Mercantili:public Natante{
      friend ostream& operator<<(ostream& o,const Mercantili& n);
      friend istream& operator>>(istream& i,Mercantili& n);
      public:
             Mercantili(int id=0,double px=0,double py=0,double vel=0,
                       double dir=0,double lun=0,double lar=0,int numCont=0
                       ,double valTot=0,double pes=0);
             virtual~Mercantili();
             virtual void Modifica();
             virtual void stampa();
      private:
              int numeroContainer;
              double valoreTotale;
              double peso;
      };

ostream& operator<<(ostream& o,const Mercantili& n);
istream& operator>>(istream& i,Mercantili& n);

#endif
