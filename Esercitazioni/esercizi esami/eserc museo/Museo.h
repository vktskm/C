#ifndef MUSEO_H
#define MUSEO_H

#include <string>
using std::string;

#include "OperaDarte.h"

static const int maxDim=500;

class Museo{
      public:
             Museo(string nom="",string ind="");
             void aggiornaElenco(OperaDarte* el[],int dm);
             void printElenco()const;
      private:
              string nome,indirizzo;
              OperaDarte* elenco[maxDim];
              int dim;
      };

#endif
