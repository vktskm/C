#include "Persona.h"

#include <iostream>
using std::cout;

Persona::Persona():nome("-vuoto-"),cognome("-vuoto-"),codiceFiscale("-vuoto-"){
          
          }
          
Persona::Persona(string n,string c, string cf):nome(n),cognome(c),codiceFiscale(cf){
          
                        }
          
Persona::~Persona(){
          print();  
                    }
                        
Persona& Persona::setNome(const string& n){
     nome=n;
     return *this;
     }
     
Persona& Persona::setCognome(const string& c){
     cognome=c;
     return *this;
     }
     
Persona& Persona::setCodiceFiscale(const string& cf){
     codiceFiscale=cf;
     return *this;
     }
     
string Persona::getNome()const{
       return nome;
       }

string Persona::getCognome()const{
       return cognome;
       }

string Persona::getCodiceFiscale()const{
       return codiceFiscale;
       }
       
void Persona::print()const{
     cout<<"Invocazione di PRINT della classe PERSONA:\n";
     cout<<"\nNome = "<<nome<<"\nCognome = "<<cognome<<"\nCodice fiscale = "<<codiceFiscale;
     }
     
void Persona::print2()const{
     cout<<"Invocazione di PRINT2 della classe PERSONA:\n";
     cout<<"\nNome = "<<nome<<"\nCognome = "<<cognome<<"\nCodice fiscale = "<<codiceFiscale;
     }
