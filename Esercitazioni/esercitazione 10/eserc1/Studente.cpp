#include "Studente.h"

#include <iostream>
using std::cout;

Studente::Studente():matricola(0),corsoDiLaurea("-vuoto-"),Persona(){
         
                     }
                     
Studente::Studente(string n,string c, string cf,const long m,const string& cl):matricola(m),corsoDiLaurea(cl),Persona(n,c,cf){
            
                         }
                         
Studente::~Studente(){
          
          }
          
Studente& Studente::setMatr(long m){
     matricola=m;
     return *this;
     }

Studente& Studente::setCDL(const string& cdl){
     corsoDiLaurea=cdl;
     return *this;
     }
     
long Studente::getMatr()const{
       return matricola;
       }

string Studente::getCDL()const{
       return corsoDiLaurea;
       }
       
void Studente::print()const{
     cout<<"Invocazione di PRINT della classe STUDENTE:\n";
     Persona::print();
     cout<<"\nMatricola ="<<matricola<<"\nCorso di laurea = "<<corsoDiLaurea;
     }

void Studente::print2()const{
     cout<<"Invocazione di PRINT2 della classe STUDENTE:\n";
     Persona::print();
     cout<<"\nMatricola ="<<matricola<<"\nCorso di laurea = "<<corsoDiLaurea;
     }
