#include "Robot.h"

#include "Arena.h"

extern const int lArena;

Robot::Robot(int id,int px,int py):ID(id),x(px),y(py){
                 
                 }
                 
void Robot::Avanza(){
     if(x<0){x+=velocita;resistenzaAttuale--;}
     if(y<0){y+=velocita;resistenzaAttuale--;}
     if(x>=lArena){x-=velocita;resistenzaAttuale--;}
     if(y>=lArena){y-=velocita;resistenzaAttuale--;}
     }

bool Robot::morto(){
     if(resistenzaAttuale<=0)
        return true;
     return false;
     }

int Robot::getID(){
    return ID;
    }
    
void Robot::stampaCoordinate(){
     cout<<"\n---------------------------\n";
     cout<<"ID = "<<ID<<"\n";
     cout<<"x = "<<x<<"\n";
     cout<<"y = "<<y<<"\n";
     cout<<"resistenza attuale = "<<resistenzaAttuale<<"\n";
     }
