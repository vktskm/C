#include "Cilindro.h"

#include <iostream>
using std::cout;
using std::endl;


Cilindro::Cilindro(double diam,double l,const string& n)
:CilindroEllittico(diam,diam,l,n){
                                  ;
                                  }
                                
                                  
void Cilindro::setDiametro(double d){
     CilindroEllittico::setBase(d);
     CilindroEllittico::setAltezza(d);
     }
             
double Cilindro::getDiametro()const{
       return CilindroEllittico::getBase();
       }
       
void Cilindro::print()const{
     Shape::print();
     cout<<"DIAMETRO DI BASE: "<<CilindroEllittico::getBase()<<endl;
     cout<<"LARGHEZZA: "<<ThreeDimensionalShape::getLarghezza()<<endl;
     }
