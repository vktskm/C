#include "Quadrilatero.h"

#include <iostream>
using std::cout;

Quadrilatero::Quadrilatero(double b,double h,const string& n):
                                  TwoDimensionalShape(b,h,n){}
                                  
void Quadrilatero::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di un quadrilatero...\n\n";
     print();
     cout<<"\n\n...quadrilatero disegnato.\n";
     }
 
