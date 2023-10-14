#ifndef FILM_H
#define FILM_H

#include <string>

#include "Attore.h"

#include <cstdlib>

#include <iostream>
using std::ostream;
using std::istream;

class Film{
      friend ostream& operator<<(ostream& o,const Film& f);
      friend istream& operator>>(istream& i,Film& f);

      public:
             Film(string tit="-vuoto-",int anno=0,int numeroAtt=0,Attore* att[]=0);
             void print()const;
      private:
              string titolo;
              int annoProduzione;
              Attore* attori[5];
              int numeroAttori;
      };

ostream& operator<<(ostream& o,const Film& f);
istream& operator>>(istream& i,Film& f);


#endif
