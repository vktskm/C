#ifndef NOT_H
#define NOT_H

#include "Porta.h"

class Not : public Porta{
      public:
             Not();
             virtual bool out();
      };

#endif
