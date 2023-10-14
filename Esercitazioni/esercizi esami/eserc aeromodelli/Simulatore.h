#ifndef SIM_H
#define SIM_H

#include "Aeromodello.h"
#include "Aliante.h"
#include "Motore.h"

class Simulatore{
      public:
             Simulatore();
             void aggiungiMotore();
             void aggiungiAliante();
             void faiAvanzare();
             void modifica();
             void print();
      
      private:
              Aeromodello* elenco[50];
              int dim;
      };

#endif
