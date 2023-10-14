#include "Xor.h"

Xor::Xor(){
      }

bool Xor::out(){
        bool x,y;
        interpretaI1I2(x,y);
        return (x^y);
        }

