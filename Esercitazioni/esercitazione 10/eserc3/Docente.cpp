#include "Docente.h"

Docente::Docente(const string& n,const string& c,Date d,const string& ins):
                       Persona(n,c,d),insegnamento(ins){
                                                        ;
                                                        }
                                                        
Docente::~Docente(){
                    }
                    
const string& Docente::getInsegnamento()const{
      return insegnamento;
      }

void Docente::setInsegnamento(const string& ins){
     insegnamento = ins;
     }

void Docente::print()const{
     cout<<"Prof. ";
     Persona::print();
     }

ostream& operator<<(ostream& o,const Docente& d){
         o<<"Data di nascita: "<<d.getDataDiNascita();
         o<<"\nInsegnamento: "<<d.getInsegnamento();
         return o;
         }
