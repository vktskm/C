#include "Campeggio.h"

#include <iostream>
using std::cout;

Campeggio::Campeggio(string n,string indir,Posto* el[],int dim):
                            nome(n),indirizzo(indir),numeroPosti(dim){
                                                                      if(numeroPosti<100){
                                                                                         for(int i=0;i<numeroPosti;i++){
                                                                                                 elenco[i]=el[i];
                                                                                                 }
                                                                                         }
                                                                      else cout<<"Numero posti elevato.";
                                                                                         
                                                                      }
                                                                      
void Campeggio::print()const{
     cout<<"Nome campeggio: "<<nome<<"\n";
     cout<<"Indirizzo: "<<indirizzo<<"\n";
     cout<<"Elenco posti:\n";
     for(int i=0;i<numeroPosti;i++){
             (*elenco[i]).print();
             cout<<"\n";
             }
     }

void Campeggio::modificaOccupaz(int id,bool b){
     
          for(int i=0;i<numeroPosti;i++){
            if((*elenco[i]).getID()==id){
                                      (*elenco[i]).modificaOccupaz(b);
                                      break;   
                                         }
          
          }
          
        
     }
     
bool Campeggio::getStatoOccupaz(int id){
     for(int i=0;i<numeroPosti;i++){
            if((*elenco[i]).getID()==id)
              return (*elenco[i]).getOccupaz();
                                                                               }
          
          }
    
     
int Campeggio::getNumeroPosti(){
    return numeroPosti;
    }
