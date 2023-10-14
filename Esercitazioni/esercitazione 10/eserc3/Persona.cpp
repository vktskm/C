#include "Persona.h"

Persona::Persona(const string& n,const string& c,Date d):
                         nome(n),cognome(c),dataDiNascita(d){
                                                             ;
                                                             }

Persona::~Persona(){
           }

const string& Persona::getNome()const{
      return nome;
      }
      
const string& Persona::getCognome()const{
      return cognome;
      }

const Date& Persona::getDataDiNascita()const{
      return dataDiNascita;
      }
      
Persona& Persona::setNome(const string& n){
         nome=n;
         return *this;
         }

Persona& Persona::setCognome(const string& c){
         cognome=c;
         return *this;
         }

Persona& Persona::setDataDiNascita(const Date& d){
         dataDiNascita=d;
         return *this;
         }

void Persona::print()const{
     cout<<nome<<" "<<cognome;
     }
     
ostream& operator<<(ostream& o,const Persona& p){
         o<<"Data di nascita: "<<p.getDataDiNascita();
         return o;
         }
