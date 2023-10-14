#include "Triangolo.h"

#include <iostream>
using std::cout;
using std::cin;

Triangolo::Triangolo(double b,double h,const string& n):
                            TwoDimensionalShape(b,h,n){}

void Triangolo::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di un triangolo...\n\n";
     print();
     cout<<"\n\n...triangolo disegnato.\n";
     }

 
