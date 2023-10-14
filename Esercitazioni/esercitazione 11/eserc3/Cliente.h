#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

#include <iostream>
using std::ostream;
using std::istream;

class Cliente:public Persona{
      friend ostream& operator<<(ostream& o,const Cliente& c);
      friend istream& operator>>(istream& i,Cliente& c);

      public:
             Cliente(string n="-vuoto-",string c="-vuoto-",string d="-vuoto-",double cred=0);
             void setCreditoResiduo(double d);
             double getCreditoResiduo()const;
             
      private:
              double creditoResiduo;
      };

ostream& operator<<(ostream& o,const Cliente& c);
istream& operator>>(istream& i,Cliente& c);


#endif
