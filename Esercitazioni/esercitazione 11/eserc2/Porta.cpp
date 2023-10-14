#include "Porta.h"

Porta::Porta(){
               }
               
void Porta::setI1(){
     I1=(Porta*)1;
     }
     
void Porta::resetI1(){
     I1=(Porta*)0;
     }

void Porta::connectI1(Porta* pPtr){
     I1=pPtr;
     }

void Porta::interpretaI1(bool &x){
        if(I1==0)x=false;
          else if(I1==(Porta*)1)x=true;
        else x=I1->out();
     }
