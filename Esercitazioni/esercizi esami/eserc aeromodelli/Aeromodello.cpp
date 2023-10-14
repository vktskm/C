#include "Aeromodello.h"

#include <iostream>
using std::cout;
using std::cin;

Aeromodello::Aeromodello(string id,double lat,double longit,double alt,
double deltaLa,double deltaLon,double deltaAl,double pTC,double pTP):ID(id),latitudine(lat),longitudine(longit),
                                  altitudine(alt),deltaLat(deltaLa),deltaLong(deltaLon),deltaAlt(deltaAl){
                                                               
                                                               setPTCPTP(pTC,pTP);
                                                               
                                                               
                                                               }
                                  
void Aeromodello::setPTCPTP(double pTC,double pTP){
                if((pTC<=10)&&(pTC>=-10))
                  posizioneTimoneCoda=pTC;
                else posizioneTimoneCoda=0;
                if((pTP<=10)&&(pTP>=-10))
                  posizioneTimoneProfondita=pTP;
                else posizioneTimoneProfondita=0;
                 }

void Aeromodello::Avanza(){
                  Aeromodello::latitudine = Aeromodello::latitudine+Aeromodello::deltaLat; 
                  Aeromodello::longitudine = Aeromodello::longitudine+Aeromodello::deltaLong; 
                  Aeromodello::altitudine = Aeromodello::altitudine+Aeromodello::deltaAlt;
                  }
                  
void Aeromodello::Modifica()
{
     cout<<"ID: ";
     cin>>ID;
     cout<<"\nLatitudine: ";
     cin>>latitudine;
     cout<<"\nLongitudine: ";
     cin>>longitudine;
     cout<<"\nAltitudine: ";
     cin>>altitudine;
     cout<<"\nDelta Latitudine: ";
     cin>>deltaLat;
     cout<<"\nDelta Longitudine: ";
     cin>>deltaLong;
     cout<<"\nDelta Altitudine: ";
     cin>>deltaAlt;
     double a,b;
     cout<<"\nposizioneTimoneCoda: ";
     cin>>a;
     cout<<"\nposizioneTimoneProfondita: ";
     cin>>b;
     setPTCPTP(a,b);
     
     }
     
void Aeromodello::print(){
        cout<<"ID: "<<ID<<"\n";
        cout<<"latitudine: "<<latitudine<<"\n";
        cout<<"longitudine: "<<longitudine<<"\n";
        cout<<"altitudine: "<<altitudine<<"\n";
        cout<<"DeltaLatitudine: "<<deltaLat<<"\n";
        cout<<"DeltaLongitudine: "<<deltaLong<<"\n";
        cout<<"DeltaAltitudine: "<<deltaAlt<<"\n";
        cout<<"Posizione Timone Coda: "<<posizioneTimoneCoda<<"\n";
        cout<<"Posizione Timone Profondita: "<<posizioneTimoneProfondita<<"\n";
        }
