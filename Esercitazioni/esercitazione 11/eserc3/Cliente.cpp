#include "Cliente.h"

#include <iostream>
using std::cout;

Cliente::Cliente(string n,string c,string d,double cred):
                        Persona(n,c,d),creditoResiduo(cred){
                                                            }
                                                            
void Cliente::setCreditoResiduo(double d){
     creditoResiduo=d;
     }
     
double Cliente::getCreditoResiduo()const{
       return creditoResiduo;
       }

ostream& operator<<(ostream& o,const Cliente& c){
         o<<static_cast <Persona> (c);
         o<<"Credito residuo: "<<c.creditoResiduo;
         return o;
         }
              
istream& operator>>(istream& i,Cliente& c){
         i>>static_cast <Persona&> (c);
         i>>c.creditoResiduo;
         return i;
         }
