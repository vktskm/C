#ifndef PORTABINARIA_H
#define PORTABINARIA_H

#include "Porta.h"

class PortaBinaria : public Porta{
      public:
             PortaBinaria();
             void setI2();
             void resetI2();
             void connectI2(Porta*);
             virtual bool out()=0;
             void interpretaI1I2(bool &x,bool &y);


      protected:
             Porta* I2;
      };

#endif
