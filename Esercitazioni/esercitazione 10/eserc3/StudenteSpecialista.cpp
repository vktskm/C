#include "StudenteSpecialista.h"

StudenteSpecialista::StudenteSpecialista(const string& n,const string& c,
                      Date d,const string& cDL,
                      const string& laureaTr):
                           Studente(n,c,d,cDL),
                           laureaTriennaleInPossesso(laureaTr){
                                                               ;
                                                               }

StudenteSpecialista::~StudenteSpecialista(){
                                            ;
                                            }
                                            
void StudenteSpecialista::setLaureaTriennaleInPossesso
                         (const string& laureaTr){
     laureaTriennaleInPossesso=laureaTr;
     }
     
const string& StudenteSpecialista::getLaureaTriennaleInPossesso()const{
      return laureaTriennaleInPossesso;
      }
      
void StudenteSpecialista::print()const{
     cout<<"Dott. ";
     Persona::print();
     }

ostream& operator<<(ostream& o,const StudenteSpecialista& sp){
         o<<"Data di nascita: "<<sp.getDataDiNascita();
         o<<"\nCorso di laurea: "<<sp.getCorsoDiLaurea();
         o<<"\nLaurea triennale in possesso: "<<sp.getLaureaTriennaleInPossesso();
         return o;
         }

