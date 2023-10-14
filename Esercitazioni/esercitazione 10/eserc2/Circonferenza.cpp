#include "Circonferenza.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


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
     
void Circonferenza::draw()const{
     cout<<"\n\n----------------------------\n";
     cout<<"Disegno di una circonferenza...\n\n";
     print();
     cout<<"\n\n...circonferenza disegnata.\n";
     }
 
void Circonferenza::interagisciUtente(){
     double r;
     cout<<"DIAMETRO: ";
     cin>>r;
     setDiametro(r);
     }
