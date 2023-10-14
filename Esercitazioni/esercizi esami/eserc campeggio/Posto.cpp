#include "Posto.h"

#include <iostream>
using std::cout;
using std::cin;

Posto::Posto(int I,double pr,bool occup):ID(I),prezzo(pr),occupazione(occup){
                 ;
                 }
                 
int Posto::getID()const{
    return ID;
    }
    
void Posto::setID(){
     cout<<"Inserisci l'ID: ";
     cin>>ID;
     }
     
double Posto::getPrezzo()const{
       return prezzo;
       }
             
void Posto::setPrezzo(){
     cout<<"Inserisci il prezzo: ";
     cin>>prezzo;
     }
     
ostream& operator<<(ostream& o,const Posto& p){
         o<<"ID posto= "<<p.getID()<<"\n";
         o<<"Prezzo: "<<p.getPrezzo()<<"\n";
         o<<"Occupato: "<<p.occupazione<<"\n";
         return o;
         }

istream& operator>>(istream& i,Posto& p){
         i>>p.ID>>p.prezzo>>p.occupazione;
         return i;
         }
         
void Posto::print(){
     cout<<*this;
     }
     
void Posto::modificaOccupaz(bool b){
     occupazione=b;
     }

bool Posto::getOccupaz(){
     return occupazione;
     }
