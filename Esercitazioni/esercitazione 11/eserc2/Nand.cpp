#include "Nand.h"

Nand::Nand(){
      }

bool Nand::out(){
        bool x,y;
        interpretaI1I2(x,y);
        return !(x&&y);
        }

