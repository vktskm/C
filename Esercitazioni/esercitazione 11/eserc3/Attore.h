#ifndef ATTORE_H
#define ATTORE_H

#include "Persona.h"

#include <iostream>
using std::ostream;
using std::istream;

class Attore:public Persona{
      friend ostream& operator<<(ostream& o,const Attore& a);
      friend istream& operator>>(istream& i,Attore& a);

      public:
             Attore(string n="-vuoto-",string c="-vuoto-",
                    string d="-vuoto-",string nA="-vuoto-",int num=0);
             
      private:
              string nomeDArte;
              int numeroFilm;
      };

ostream& operator<<(ostream& o,const Attore& a);
istream& operator>>(istream& i,Attore& a);

#endif
