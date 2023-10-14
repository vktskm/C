#ifndef SIMULATORE_H
#define SIMULATORE_H

#include "Natante.h"

class Simulatore{
      public:
             Simulatore();
             virtual~Simulatore();
             void faiAvanzare();
             void inserisciMercantile();
             void inserisciPasseggeri();
             void cancellaNatante(int id);
             void modificaParametriNatanti();
             void stampa();
             Natante* cerca(int id);
      private:
              Natante* vet[100];
              int dimVet;
              
      };

#endif
