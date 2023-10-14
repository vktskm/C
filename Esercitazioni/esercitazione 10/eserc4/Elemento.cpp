#include <iostream>
using std::cout;

#include "Elemento.h"

Elemento::Elemento(const char* nom,const char* cogn,
                      const char* numTel){
                             setNome(nom);
                             setCognome(cogn);
                             setNumeroTelefono(numTel);
                             }
Elemento::~Elemento(){
                      ;
                      }
                      
void Elemento::setNome(const char* nom){
     strcpy(nome,nom);
     }

void Elemento::setCognome(const char* cogn){
    strcpy(cognome,cogn);
     }
             
void Elemento::setNumeroTelefono(const char* numTel){
     //controllo che numTel contenga solo numeri 
     //e non lettere o altro
     int i;
     for(i=0;numTel[i]!=0;i++)
         if((numTel[i]>=48)&&(numTel[i]<=57))
            continue;
         else{
              cout<<"Numero di telefono non valido.\n";
              strcpy(numeroTelefono,"-vuoto-");
              return;
              } 
      strcpy(numeroTelefono,numTel);
     }

const char* Elemento::getNome()const{
       return nome;
       }
       
const char* Elemento::getCognome()const{
       return cognome;
       }

const char* Elemento::getNumeroTelefono()const{
       return numeroTelefono;
       }

void Elemento::print()const{
     cout<<"Nome: "<<getNome()<<"\n";
     cout<<"Cognome: "<<getCognome()<<"\n";
     cout<<"NumeroTelefono: "<<getNumeroTelefono()<<"\n";
     }

bool Elemento::operator==(Elemento& b){
     /*
     cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
     cout<<"Andamento del confronto:\n";
     cout<<getNome()<<"- - - - -"<<b.getNome()<<"------>"<<strcmp(getNome(),b.getNome())<<"\n";
     cout<<getCognome()<<"- - - - -"<<b.getCognome()<<"------>"<<strcmp(getCognome(),b.getCognome())<<"\n";
     cout<<getNumeroTelefono()<<"- - - - -"<<b.getNumeroTelefono()<<"------>"<<strcmp(getNumeroTelefono(),b.getNumeroTelefono())<<"\n";
          cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
*/
     if((!strcmp(getNome(),b.getNome()))&&
     (!strcmp(getCognome(),b.getCognome()))&&
     (!strcmp(getNumeroTelefono(),b.getNumeroTelefono()))
     )
     return true;
     return false;
     }

