#include "PortaBinaria.h"

PortaBinaria::PortaBinaria(){
                             }
                             
void PortaBinaria::setI2(){
     I2=(Porta*)1;
     }

void PortaBinaria::resetI2(){
     I2=(Porta*)0;
     }
     
void PortaBinaria::connectI2(Porta* pPtr){
     I2=pPtr;
     }

void PortaBinaria::interpretaI1I2(bool &x,bool &y){
     interpretaI1(x);
     
     if(I2==0)y=false;
          else if(I2==(Porta*)1)y=true;
        else y=I2->out();
     }
