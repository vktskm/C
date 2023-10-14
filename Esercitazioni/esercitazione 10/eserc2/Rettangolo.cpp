#include "Rettangolo.h"

#include <iostream>
using std::cout;

Rettangolo::Rettangolo(double b,double h,const string& n):
                              Quadrilatero(b,h,n){}
                              
void Rettangolo::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di un rettangolo...\n\n";
     print();
     cout<<"\n\n...rettangolo disegnato.\n";
     }


 
