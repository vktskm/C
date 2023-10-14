#include "Ellisse.h"

#include <iostream>
using std::cout;
 
Ellisse::Ellisse(double b,double h,const string& n)
            :TwoDimensionalShape(b,h,n){}
            
void Ellisse::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di un'ellisse...\n\n";
     print();
     cout<<"\n\n...ellisse disegnata.\n";
     }

