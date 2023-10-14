#include "Quadrato.h"

#include <iostream>
using std::cout;
using std::cin;

Quadrato::Quadrato(double b,double h,const string& n):
                          Rettangolo(b,h,n){}
 
void Quadrato::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di un quadrato...\n\n";
     print();
     cout<<"\n\n...quadrato disegnato.\n";
     }
     
void Quadrato::setLato(double l){
     setBase(l);
     setAltezza(l);
     
     }
     
void Quadrato::interagisciUtente(){
     double l;
     cout<<"LATO: ";
     cin>>l;
     setLato(l);
        }
