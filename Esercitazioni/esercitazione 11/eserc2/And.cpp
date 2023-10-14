#include "And.h"

And::And(){
      }

bool And::out(){
        bool x,y;
        interpretaI1I2(x,y);
        return x&&y;
        }

