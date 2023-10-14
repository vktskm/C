#include "Dipinto.h"

#include <iostream>
using std::cout;

Dipinto::Dipinto(string tit,string autor,string dataCreaz,string tecn,
 double lung,double larg):OperaDarte(tit,autor,dataCreaz),tecnica(tecn),
                          lunghezza(lung),larghezza(larg){
                                                          }

ostream& operator<<(ostream& o,const Dipinto& op){
         o<<"Tecnica: "<<op.tecnica<<"\n";
         o<<"Lunghezza: "<<op.lunghezza<<"\n";
         o<<"Larghezza: "<<op.larghezza<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Dipinto& op){
         i>>static_cast<OperaDarte&>(op);
         i>>op.lunghezza>>op.larghezza;
         return i;
         }

void Dipinto::print(){
        OperaDarte::print();
        cout<<*this;
        }
