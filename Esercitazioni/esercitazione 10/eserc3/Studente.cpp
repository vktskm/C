#include  "Studente.h"

Studente::Studente(const string& n,const string& c,
                   Date d,const string& cDL):
                        Persona(n,c,d),corsoDiLaurea(cDL){
                        ;
                        }


Studente::~Studente(){
                   ;
                   }
                   
void Studente::setCorsoDiLaurea(const string& cDL){
     corsoDiLaurea=cDL;
     }
             
const string& Studente::getCorsoDiLaurea()const{
      return corsoDiLaurea;
      }
      
void Studente::print()const{
     cout<<"Sig. ";
     Persona::print();
     }
      
ostream& operator<<(ostream& o,const Studente& s){
         o<<"Data di nascita: "<<s.getDataDiNascita();
         o<<"\nCorso di laurea: "<<s.getCorsoDiLaurea();
         return o;
         }
