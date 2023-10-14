#include "Mercantili.h"

Mercantili::Mercantili(int id,double px,double py,double vel,
                       double dir,double lun,double lar,int numCont
                       ,double valTot,double pes):Natante(id,px,py,vel,dir,lun,lar),
                               numeroContainer(numCont),valoreTotale(valTot),peso(pes){
                                                                                       }
Mercantili::~Mercantili(){
                          }

ostream& operator<<(ostream& o,const Mercantili& n){
         o<<static_cast <Natante> (n);
         o<<"numero container: "<<n.numeroContainer<<"\n";
         o<<"valore totale: "<<n.valoreTotale<<"\n";
         o<<"peso: "<<n.peso<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Mercantili& n){
         i>>static_cast <Natante&> (n);
         i>>n.numeroContainer>>n.valoreTotale>>n.peso;
         return i;
         }
         
void Mercantili::Modifica(){
        Natante::Modifica();
        cout<<"\nnumero container: ";
        cin>>numeroContainer;
        cout<<"\nvalore totale: ";
        cin>>valoreTotale;
        cout<<"\npeso: ";
        cin>>peso;
        }

void Mercantili::stampa(){
     cout<<*this;
        }
