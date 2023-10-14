#include "Passeggeri.h"

Passeggeri::Passeggeri(int id,double px,double py,double vel,
             double dir,double lun,double lar,int nPas,int nAuto):
                    Natante(id,px,py,vel,dir,lun,lar),numeroPasseggeri(nPas),
                    numeroAuto(nAuto){
                                      
                                      }
             
Passeggeri::~Passeggeri(){
              }

ostream& operator<<(ostream& o,const Passeggeri& n){
         o<<static_cast <Natante> (n);
         o<<"numero passeggeri: "<<n.numeroPasseggeri<<"\n";
         o<<"numero auto: "<<n.numeroAuto<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Passeggeri& n){
         i>>static_cast <Natante&> (n);
         i>>n.numeroPasseggeri>>n.numeroAuto;
         return i;
         }

void Passeggeri::Modifica(){
        Natante::Modifica();
        cout<<"\nnumero passeggeri: ";
        cin>>numeroPasseggeri;
        cout<<"\nnumero auto: ";
        cin>>numeroAuto;
        }
        
void Passeggeri::stampa(){
     cout<<*this;
        }
