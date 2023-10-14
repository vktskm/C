#include "Corazzati.h"

#include "Arena.h"

extern const int lArena;

Corazzati::Corazzati(int id,int px,int py):Robot(id,px,py)
                     {
                        Robot::velocita=0.2;
                        Robot::resistenzaAttuale=10;
                        tempo=5;
                                                            }

//si sposta di un metro (un quadrato) ogni 5 sec

void Corazzati::Avanza(){
       if(tempo==5){
         passo=rand()%4;
         tempo=0;
         }    
       
       
       switch (passo){
            case 0:x-=Robot::velocita;break;
            case 1:y+=Robot::velocita;break;
            case 2:x+=Robot::velocita;break;
            case 3:y-=Robot::velocita;break;
            }
     Robot::Avanza();
     
     //se hanno sbattuto nel muro faccio in modo che adesso cambino direzione
     if((x<0)||(y<0)||(x>lArena)||(y>lArena)){
                     passo=rand()%4;                         
                                              }
     
     tempo++;
     
     //caso robot da far morire
     if(resistenzaAttuale==0){
         y=x=-1;             
        }     
     }
     
     
     
         
    
