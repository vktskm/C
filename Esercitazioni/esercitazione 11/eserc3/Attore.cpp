#include "Attore.h"

#include <iostream>
using std::cout;

Attore::Attore(string n,string c,string d,string nA,int num):
                  Persona(n,c,d),nomeDArte(nA),numeroFilm(num){
                                                             }
                                                             

ostream& operator<<(ostream& o,const Attore& a){
         o<<static_cast <Persona> (a);
         o<<"Nome d'arte: "<<a.nomeDArte<<"\n";
         o<<"Numero film: "<<a.numeroFilm;
         return o;
         }

istream& operator>>(istream& i,Attore& a){
         i>>static_cast <Persona&> (a);
         i>>a.nomeDArte>>a.numeroFilm;
         return i;
         }
