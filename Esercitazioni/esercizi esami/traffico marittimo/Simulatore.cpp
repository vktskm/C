#include "Simulatore.h"

#include "Mercantili.h"
#include "Passeggeri.h"


Simulatore::Simulatore(){
                    dimVet=0;
                    for(int i=0;i<100;i++)
                       vet[i]=0;
                    }
                    
Simulatore::~Simulatore(){
              }
             
void Simulatore::faiAvanzare(){
     for(int i=0;i<dimVet;i++){
             (*vet[i]).Avanza();
             }
     }
     
void Simulatore::inserisciMercantile(){
     for(int i=0;i<dimVet;i++){
             if(vet[i]==0){
                        vet[i]=new Mercantili(i);  
                        return; 
                           }
             }
     
     if(dimVet<100){
       vet[dimVet]=new Mercantili(dimVet);
       dimVet++;
       }
     }
     
void Simulatore::inserisciPasseggeri(){
     for(int i=0;i<dimVet;i++){
             if(vet[i]==0){
                        vet[i]=new Passeggeri(i);  
                        return; 
                           }
             }
     
     if(dimVet<100){
       vet[dimVet]=new Passeggeri(dimVet);
       dimVet++;
       }
     }
     
void Simulatore::cancellaNatante(int id){
     for(int i=0;i<dimVet;i++){
            if((vet[i]!=0)&&((*vet[i]).getID()==id)){
                         delete vet[i];
                         vet[i]=0; 
                          } 
             }
     }
     
     
     
    


void Simulatore::modificaParametriNatanti(){
     for(int i=0;i<dimVet;i++){
            if(vet[i]!=0){
                         (*vet[i]).Modifica(); 
                          } 
             }
     }
     
void Simulatore::stampa(){
     for(int i=0;i<dimVet;i++){
             if(vet[i]!=0){
                         cout<<"\n-------------\n";
                        (*vet[i]).stampa();
                          }
             }
     }

Natante* Simulatore::cerca(int id){
         for(int i=0;i<dimVet;i++){
            if((vet[i]!=0)&&((*vet[i]).getID()==id)){
                          return vet[i];
                          }
            }
         }
