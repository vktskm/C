#include "Natante.h"

#include <cmath>

Natante::Natante(int id,double px,double py,
double vel,double dir,double lun,double lar):ID(id),x(px),y(py),velocita(vel),
                                              lunghezza(lun),larghezza(lar){
                                                 setDirezione(dir);                           
                                                                            }
Natante::~Natante(){
           }
                                                                            
void Natante::setDirezione(double dir){
                if((dir>=0)&&(dir<=6.28))
                   direzione=dir;        
                        }

ostream& operator<<(ostream& o,const Natante& n){
         o<<"ID: "<<n.ID<<"\n";
         o<<"coordinata x: "<<n.x<<"\n";
         o<<"coordinata y: "<<n.y<<"\n";
         o<<"velocita': "<<n.velocita<<"\n";
         o<<"direzione: "<<n.direzione<<"\n";
         o<<"lunghezza: "<<n.lunghezza<<"\n";
         o<<"larghezza: "<<n.larghezza<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Natante& n){
         i>>n.ID>>n.x>>n.y>>n.velocita>>n.direzione>>n.lunghezza>>n.larghezza;
         return i;
         }

void Natante::Avanza(){
     x = x + velocita*cos(direzione);
     y = y + velocita*sin(direzione);
     }

void Natante::Modifica(){
         double tmp;
         cout<<"ID: ";
         cin>>ID;
         cout<<"\ncoordinata x: ";
         cin>>x;
         cout<<"\ncoordinata y: ";
         cin>>y;
         cout<<"\nvelocita': ";
         cin>>velocita;
         cout<<"\ndirezione: ";
         cin>>tmp;
         setDirezione(tmp);
         cout<<"\nlunghezza: ";
         cin>>lunghezza;
         cout<<"\nlarghezza: ";
         cin>>larghezza;
     }


int Natante::getID(){
    return ID;
    }
    
void Natante::stampa(){
     cout<<*this;
        }
        

