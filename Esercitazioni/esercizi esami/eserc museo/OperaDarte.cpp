#include "OperaDarte.h"

#include <iostream>
using std::cout;

OperaDarte::OperaDarte(string tit,string autor,string dataCreaz):
                              titolo(tit),autore(autor),dataCreazione(dataCreaz){
                                                                                 }
ostream& operator<<(ostream& o,const OperaDarte& op){
         o<<"Titolo: "<<op.titolo<<"\n";
         o<<"Autore: "<<op.autore<<"\n";
         o<<"Data creazione: "<<op.dataCreazione<<"\n";
         return o;
         }
         
istream& operator>>(istream& i,OperaDarte& op){
         i>>op.titolo>>op.autore>>op.dataCreazione;
         return i;
         }                                                                                 

void OperaDarte::print(){
     cout<<*this;
     }
