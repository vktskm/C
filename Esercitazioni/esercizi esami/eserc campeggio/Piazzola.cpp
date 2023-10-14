#include "Piazzola.h"

#include <iostream>
using std::cout;
using std::cin;

Piazzola::Piazzola(int I,double pr,bool occup,double lung,double larg,bool acq,bool luc):
                       Posto(I,pr,occup),lunghezza(lung),larghezza(larg),acqua(acq),luce(luc)
                       {
                       }
                       
void Piazzola::setLunghezza(){
     cout<<"inserisci la lunghezza: ";
     cin>>lunghezza;
     }
     
void Piazzola::setLarghezza(){
     cout<<"inserisci la larghezza: ";
     cin>>larghezza;
     }
     
void Piazzola::setAcqua(){
     char c='a';
     while((c!='n')&&(c!='y')){
      cout<<"C'e' acqua?(y/n): ";
      cin>>c;
      switch (c){
            case 'y':acqua=true;break;
            case 'n':acqua=false;break;
            
            }
      }
     }
     
void Piazzola::setLuce(){
     char c='a';
     while((c!='n')&&(c!='y')){
      cout<<"C'e' luce?(y/n): ";
      cin>>c;
      switch (c){
            case 'y':luce=true;break;
            case 'n':luce=false;break;
            
            }
      }
     }
     
ostream& operator<<(ostream& o,const Piazzola& p){
         o<<static_cast<Posto>(p);
         o<<"Lunghezza: "<<p.lunghezza<<"\n";
         o<<"Larghezza: "<<p.larghezza<<"\n";
         o<<"Acqua: "<<p.acqua<<"\n";
         o<<"Luce: "<<p.luce<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Piazzola& p){
         i>>static_cast<Posto&>(p);
         i>>p.lunghezza>>p.larghezza>>p.acqua>>p.luce;
         return i;
         }
         
void Piazzola::print(){
     cout<<*this;
     
     }
