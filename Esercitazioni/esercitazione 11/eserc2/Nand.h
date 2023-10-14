#ifndef NAND_H
#define NAND_H

#include "PortaBinaria.h"

class Nand : public PortaBinaria{
      public:
             Nand();
             virtual bool out();
      };

#endif

