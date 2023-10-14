#include "Trapezio.h"

#include <iostream>
using std::cout;
using std::endl;

Trapezio::Trapezio
(double b,double h,double secondaBas,const string& n)
:Quadrilatero(b,h,n),secondaBase(secondaBas){
                     ;
                     }
                     
void Trapezio::setSecondaBase(double b){
     secondaBase=b;
}

double Trapezio::getSecondaBase(){
       return secondaBase;
       }
       
void Trapezio::print(){
     Shape::print();
     cout<<"PRIMA BASE: "<<TwoDimensionalShape::getBase()<<endl;
     cout<<"SECONDA BASE: "<<getSecondaBase()<<endl;
     cout<<"ALTEZZA: "<< TwoDimensionalShape::getAltezza()<<endl;              
                          }
