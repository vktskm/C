#ifndef PASSEGGERI_H
#define PASSEGGERI_H

#include "Natante.h"

#include <iostream>
using std::ostream;
using std::istream;

class Passeggeri:public Natante{
      friend ostream& operator<<(ostream& o,const Passeggeri& n);
      friend istream& operator>>(istream& i,Passeggeri& n);
      public:
             Passeggeri(int id=0,double px=0,double py=0,double vel=0,
             double dir=0,double lun=0,double lar=0,int nPas=0,int nAuto=0);
             virtual~Passeggeri();
             virtual void Modifica();
             virtual void stampa();
      private:
              int numeroPasseggeri;
              int numeroAuto;
      };

ostream& operator<<(ostream& o,const Passeggeri& n);
istream& operator>>(istream& i,Passeggeri& n);

#endif
