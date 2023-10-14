#include "Veloci.h"

#include "Arena.h"

extern const int lArena;

Veloci::Veloci(int id,int px,int py):Robot(id,px,py)
                     {
                        Robot::velocita=0.6;
                        Robot::resistenzaAttuale=5;
                        tempo=5;
                        passo=0;
                        passo2=0;
                                                            }


void Veloci::Avanza(){
     if(tempo==5){
       passo=rand()%4;
       passo2=rand()%4;
       tempo=0;
       }
       
    if(tempo%2==0)
    switch (passo){
            case 0:x-=Robot::velocita;break;
            case 1:y+=Robot::velocita;break;
            case 2:x+=Robot::velocita;break;
            case 3:y-=Robot::velocita;break;
            }
     
    if(tempo%2!=0)
    switch (passo2){
            case 0:x-=Robot::velocita;break;
            case 1:y+=Robot::velocita;break;
            case 2:x+=Robot::velocita;break;
            case 3:y-=Robot::velocita;break;
            }       
    
        
    /*switch (passo){
            case 0:x+=2;y+=1;break;
            case 1:x-=1;y+=2;break;
            case 2:x-=1;y+=2;break;
            case 3:x-=2;y+=1;break;
            case 4:x-=2;y-=1;break;
            case 5:x-=1;y-=2;break;
            case 6:x+=1;y-=2;break;
            case 7:x+=2;y-=1;break;
            
            }
     */
     
     Robot::Avanza();
     
     //caso robot da far morire
     if(resistenzaAttuale<=0){
         y=x=-1;             
        }    
       
     
            
     if((x<0)||(y<0)||(x>lArena)||(y>lArena)){
                      passo=rand()%4;
                      passo2=rand()%4;                        
                                              }
     
     tempo++;
     }
     
          
     
