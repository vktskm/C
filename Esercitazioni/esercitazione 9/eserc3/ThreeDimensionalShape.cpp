#include "ThreeDimensionalShape.h"

#include <iostream>
using std::cout;
using std::endl;

ThreeDimensionalShape::ThreeDimensionalShape
(double b,double h,double l,const string& n):
       TwoDimensionalShape(b,h,n),larghezza(l){
       ;
       }
       
void ThreeDimensionalShape::setLarghezza(double d){
     larghezza=d;
     }

double ThreeDimensionalShape::getLarghezza()const{
     return larghezza;
     }
     
void ThreeDimensionalShape::print()const{
     TwoDimensionalShape::print();
     cout<<"LARGHEZZA: "<<larghezza<<endl;
     }
