#ifndef CAMPEGGIO_H
#define CAMPEGGIO_H

#include "Posto.h"

#include <string>
using std::string;


class Campeggio{
      public:
             Campeggio(string n="-vuoto-",string indir="-vuoto-",Posto* el[]=0,int dim=0);
             void print()const;
             void modificaOccupaz(int id,bool b);
             bool getStatoOccupaz(int id);
             int getNumeroPosti();
      private:
              string nome,indirizzo;
              Posto* elenco[100];
              int numeroPosti;
      };

#endif
