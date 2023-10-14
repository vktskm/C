#include "Bungalow.h"

#include <iostream>
using std::cout;
using std::cin;

Bungalow::Bungalow(int I,double pr,bool occup,int postiLet, bool bagn):
                       Posto(I,pr,occup),postiLetto(postiLet),bagno(bagn){
                                                                    ;
                                                                    }
                       
void Bungalow::setPostiLetto(){
     cout<<"Quanti posti letto ci sono? ";
     cin>>postiLetto;
     }

void Bungalow::setBagno(){
    char c='a';
     while((c!='n')&&(c!='y')){
      cout<<"C'e' bagno?(y/n): ";
      cin>>c;
      switch (c){
            case 'y':bagno=true;break;
            case 'n':bagno=false;break;
            
            }
      }
     }

ostream& operator<<(ostream& o,const Bungalow& b){
         o<<static_cast<Posto>(b);
         o<<"Posti letto: "<<b.postiLetto<<"\n";
         o<<"Bagno: "<<b.bagno<<"\n";
         return o;

         }
         
istream& operator>>(istream& i,Bungalow& b){
         i>>static_cast<Posto&>(b);
         i>>b.postiLetto>>b.bagno;
         return i;
         }
     
void Bungalow::print(){
     cout<<*this;
     }
