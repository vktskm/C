#include "Museo.h"

#include <iostream>
using std::cout;

extern const int maxDim;

Museo::Museo(string nom,string ind):nome(nom),indirizzo(ind){
                    }
                    
void Museo::aggiornaElenco(OperaDarte* el[],int dm){
     if(dm>maxDim)
        cout<<"Dimensioni troppo elevate.";
     else{
          for(int i=0;i<dm;i++)
              elenco[i]=el[i];
          dim=dm;
          }
     }

void Museo::printElenco()const{
     for(int i=0;i<dim;i++){
        (*elenco[i]).print();
        cout<<"\n---------------\n";
     }
     }
