#include "Simulatore.h"

#include <iostream>
using std::cout;

Simulatore::Simulatore(){
                         dim=0;
                                  
                                    }
                                    
void Simulatore::faiAvanzare(){
     for (int i=0;i<dim;i++)
        (*elenco[i]).Avanza();
     }
     
void Simulatore::modifica(){
     for (int i=0;i<dim;i++){
        cout<<"\n\n------------------------------------\n\n";
        (*elenco[i]).Modifica();
        }
     }

void Simulatore::aggiungiAliante(){
     dim++;
     elenco[dim-1]=new Aliante;
     }
     
void Simulatore::aggiungiMotore(){
     dim++;
     elenco[dim-1]=new Motore();
     }

void Simulatore::print(){
     for (int i=0;i<dim;i++){
        cout<<"\n\n------------------------------------\n\n";
        (*elenco[i]).print();
        cout<<"\n";
        }
     }
