#include "Aliante.h"

#include <iostream>
using std::cout;
using std::cin;

Aliante::Aliante(string id,double lat,double longit,double alt,
             double deltaLa,double deltaLon,double deltaAl,
             double pTC,double pTP,double pes):Aeromodello(id,lat,longit,alt,deltaLa,deltaLon,deltaAl,pTC,pTP),
                     peso(pes){
                               }

void Aliante::Modifica(){
        Aeromodello::Modifica();
        cout<<"\nPeso: ";
        cin>>peso;
        
        }
        
void Aliante::print(){
     Aeromodello::print();
     cout<<"Peso: "<<peso<<"\n";
     }
