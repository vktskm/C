#include "Or.h"

Or::Or(){
      }

bool Or::out(){
        bool x,y;
        interpretaI1I2(x,y);
        return x||y;
        }

