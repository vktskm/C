#ifndef DIPINTO_H
#define DIPINTO_H

#include "OperaDarte.h"

#include <iostream>
using std::ostream;
using std::istream;

class Dipinto:public OperaDarte{
      friend ostream& operator<<(ostream& o,const Dipinto& op);
      friend istream& operator>>(istream& i,Dipinto& op);
      public:
             Dipinto(string tit="",string autor="",string dataCreaz="",string tecn="",double lung=0,double larg=0);
             virtual void print();
      private:       
             string tecnica;
             double lunghezza,larghezza; 
      };

ostream& operator<<(ostream& o,const Dipinto& op);
istream& operator>>(istream& i,Dipinto& op);

#endif 
