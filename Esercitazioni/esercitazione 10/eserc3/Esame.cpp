#include "Esame.h"

Esame::Esame(const string& nomeIns,Date dEsame,
                   Docente doc):nomeInsegnamentoEsame(nomeIns),
                   dataEsame(dEsame),
                     docenteEsame(doc),dim(0){
                                              ;
                                             }

Esame::~Esame(){
                //libero gli oggetti dell'array elencoIscritti
                for(int i=0;i<dim;i++)
                    delete elencoIscritti[i];
                }

void Esame::setNomeInsegnamentoEsame(const string& n){
     nomeInsegnamentoEsame=n;
     }

const string& Esame::getNomeInsegnamentoEsame()const{
      return nomeInsegnamentoEsame;
      }
      
void Esame::setDataEsame(const Date& d){
     dataEsame=d;
     }
     
const Date& Esame::getDataEsame()const{
      return dataEsame;
      }
      
void Esame::setDocente(const Docente& d){
     docenteEsame=d;
     }
             
const Docente& Esame::getDocente()const{
      return docenteEsame;
      }

Esame& Esame::iscriviStudenteSpecialista(const Studente& s){
       if(dim==200){
          cout<<"Impossibile iscrivere altri studenti all'esame";
       return *this;   
          }
       elencoIscritti[dim]=new StudenteSpecialista;
       *elencoIscritti[dim]=s;
       dim++;
       return *this;
       }

Esame& Esame::iscriviStudente(const Studente& s){
       if(dim==200){
          cout<<"Impossibile iscrivere altri studenti all'esame";
       return *this;   
          }
       
       elencoIscritti[dim]=new Studente;
       *elencoIscritti[dim]=s;
       dim++;
       return *this;
       }

void Esame::print()const{
     //dati esame
     cout<<"\n-----------------------------------------------\n";
     cout<<"Esame di "<<getNomeInsegnamentoEsame()<<"\n";
     cout<<"Data esame: "<<getDataEsame();
          
     //stampa del docente:
     cout<<"\n------------------\n";
     cout<<"DOCENTE ESAME: ";docenteEsame.print();
     cout<<"\n"<<docenteEsame;
     
     //stampa degli iscritti
     cout<<"\n----------------\nSTUDENTI ISCRITTI:\n";
     if(dim==0)cout<<"nessuno";
     for(int i=0;i<dim;i++){
             elencoIscritti[i]->print();
             cout<<"\n"<<*elencoIscritti[i]<<"\n\n";
             }
     }
