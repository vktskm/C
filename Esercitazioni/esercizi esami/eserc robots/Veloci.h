#ifndef VELOCI_H
#define VELOCI_H

#include "Robot.h"

class Veloci:public Robot{
      public:
             Veloci(int id=0,int px=-1,int py=-1);
             virtual void Avanza();
      private:
              
              int passo2;
              
      };

#endif
