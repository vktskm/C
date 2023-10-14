#ifndef ARENA_H
#define ARENA_H

#include "Robot.h"

const int lArena=5; 

class Arena{
      public:
             Arena(Robot* arr[],int dim);
             void faiAvanzare1Passo();
             int faiAvanzareFinoAllaFine();
      private:
              int unicoRimastoVivo();
              int campo[lArena][lArena];
              Robot* array[100];
              int dimArray;
      };

#endif
