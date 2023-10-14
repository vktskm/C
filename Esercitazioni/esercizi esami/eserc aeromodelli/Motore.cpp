#include "Motore.h"

#include <iostream>
using std::cout;
using std::cin;

Motore::Motore(string id,double lat,double longit,double alt,
             double deltaLa,double deltaLon,double deltaAl,
             double pTC,double pTP,double pot):Aeromodello(id,lat,longit,alt,deltaLa,deltaLon,deltaAl,pTC,pTP)
             {
                   setPotenza(pot);
                    
                          }
                          
void Motore::setPotenza(double pot){
     if((pot<=20)&&(pot>=0))
                      potenza=pot;
     else potenza=0;
     }

void Motore::Modifica(){
        Aeromodello::Modifica();
        double tmp;
        cout<<"\nPotenza: ";
        cin>>tmp;
        setPotenza(tmp);
        }
        
void Motore::print(){
     Aeromodello::print();
     cout<<"Potenza: "<<potenza<<"\n";
     }

