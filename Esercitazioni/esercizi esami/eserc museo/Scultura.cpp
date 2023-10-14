#include "Scultura.h"

#include <iostream>
using std::cout;

Scultura::Scultura(string tit,string autor,string dataCreaz,
string mat,double alt):OperaDarte(tit,autor,dataCreaz),materiale(mat),altezza(alt){
        }

ostream& operator<<(ostream& o,const Scultura& op){
         o<<"Materiale: "<<op.materiale<<"\n";
         o<<"Altezza: "<<op.altezza<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,Scultura& op){
         i>>static_cast<OperaDarte&>(op);
         i>>op.materiale>>op.altezza;
         return i;
         }

void Scultura::print(){
        OperaDarte::print();
        cout<<*this;
        }
