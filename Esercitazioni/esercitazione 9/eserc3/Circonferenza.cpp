#include "Circonferenza.h"

#include <iostream>
using std::cout;
using std::endl;


Circonferenza::Circonferenza(double diam,const string& n)
:Ellisse(diam,diam,n){
                                  ;
                                  }
                                  
void Circonferenza::setDiametro(double d){
     Ellisse::setBase(d);
     Ellisse::setAltezza(d);
     }
             
double Circonferenza::getDiametro()const{
       return Ellisse::getBase();
       }
       
void Circonferenza::print()const{
     Shape::print();
     cout<<"DIAMETRO: "<<Ellisse::getBase()<<endl;
     }
