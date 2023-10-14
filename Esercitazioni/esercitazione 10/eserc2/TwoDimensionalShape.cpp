#include "TwoDimensionalShape.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;



TwoDimensionalShape::TwoDimensionalShape
(double b,double h,const string& n):Shape(n),base(b),altezza(h){
                                               ;
                                               }
                                               
void TwoDimensionalShape::setBase(double d){
     base=d;
     }
     
double TwoDimensionalShape::getBase()const{
       return base;
       }
       
void TwoDimensionalShape::setAltezza(double d){
     altezza=d;
     }
     
double TwoDimensionalShape::getAltezza()const{
       return altezza;
       }
       
void TwoDimensionalShape::print()const{
     Shape::print();
     cout<<"BASE: "<<base<<endl;
     cout<<"ALTEZZA: "<<altezza<<endl;
     }
     
void TwoDimensionalShape::interagisciUtente(){
     double b,h;
     cout<<"BASE: ";
     cin>>b;
     setBase(b);
     cout<<"\n";
     cout<<"ALTEZZA: ";
     cin>>h;
     setAltezza(h);
     }
 
