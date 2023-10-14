#ifndef CORAZZATI_H
#define CORAZZATI_H

#include "Robot.h"

class Corazzati:public Robot{
      public:
             Corazzati(int id=0,int px=-1,int py=-1);
             virtual void Avanza();
      private:
              
              
      };

#endif
