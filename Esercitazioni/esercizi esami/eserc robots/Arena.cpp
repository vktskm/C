#include "Arena.h"

Arena::Arena(Robot* arr[],int dim){
               if(dim<100){
                           dimArray=dim;
                           for(int i=0;i<dimArray;i++){
                                array[i]=arr[i];
                           }
               
               }
               }

void Arena::faiAvanzare1Passo(){
     for(int i=0;i<dimArray;i++){
             if((*array[i]).morto()==false){
                                (*array[i]).Avanza();
                                (*array[i]).stampaCoordinate();
                                }
                           }
     }

int Arena::faiAvanzareFinoAllaFine(){
    while(unicoRimastoVivo()==-1){
      //int i=0;//<------------------------------------
     // while(i<10){
       faiAvanzare1Passo();
    //   i++;
       }
    return unicoRimastoVivo();
    }

int Arena::unicoRimastoVivo(){
    int id=-1;
    for(int i=0;i<dimArray;i++){
            //se è vivo
       if(((*array[i]).morto()==false)&&(id==-1)){
           id=(*array[i]).getID();
           continue;
       }
       
       if(((*array[i]).morto()==false)&&(id!=-1))
         return -1;
       }
    return id;
    }
