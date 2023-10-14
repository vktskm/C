#include "Persona.h"

#include <iostream>
using std::cout;

Persona::Persona(string n,string c,string d):
                        nome(n),cognome(c),dataDiNascita(d){
                        }


ostream& operator<<(ostream& o,const Persona& p){
         o<<"Nome: "<<p.nome<<"\n";
         o<<"Cognome: "<<p.cognome<<"\n";
         o<<"Data di nascita: "<<p.dataDiNascita<<"\n";
         return o;
         }

istream& operator>>(istream& i,Persona& p){
         i>>p.nome>>p.cognome>>p.dataDiNascita;
         return i;         
         }
