#include "Nor.h"

Nor::Nor(){
      }

bool Nor::out(){
        bool x,y;
        interpretaI1I2(x,y);
        return !(x||y);
        }

