#include "TicTacToe.h"

#include <iostream>
using std::cout;
using std::endl;

TicTacToe::TicTacToe(){
                       //azzero l'array
                       for(int i=0;i<3;i++)
                          for(int j=0;j<3;j++)
                            array[i][j]=0;
                       }
                       
bool TicTacToe::giocatore1(int i,int j){
     if(array[i][j]==0){
        array[i][j]=1;
        return true;
        }
     else return false;
     }
     
bool TicTacToe::giocatore2(int i,int j){
     if(array[i][j]==0){
        array[i][j]=2;
        return true;
        }
     else return false;
     }
     
int TicTacToe::vincitore(){
    //controllo delle righe
    if((array[0][0]==array[0][1])&&(array[0][1]==array[0][2])&&((1==array[0][2])||(2==array[0][2])))
       return array[0][0]; 
    if((array[1][0]==array[1][1])&&(array[1][1]==array[1][2])&&((1==array[1][2])||(2==array[1][2])))
       return array[1][0];
    if((array[2][0]==array[2][1])&&(array[2][1]==array[2][2])&&((1==array[2][2])||(2==array[2][2])))
       return array[2][0];
    
    //controllo colonne
    if((array[0][0]==array[1][0])&&(array[1][0]==array[2][0])&&((1==array[2][0])||(2==array[2][0])))
       return array[0][0];
    if((array[0][1]==array[1][1])&&(array[1][1]==array[2][1])&&((1==array[2][1])||(2==array[2][1])))
       return array[0][1];
    if((array[0][2]==array[1][2])&&(array[1][2]==array[2][2])&&((1==array[2][2])||(2==array[2][2])))
       return array[0][2];
       
    //controllo diagonali
    if((array[0][0]==array[1][1])&&(array[1][1]==array[2][2])&&((1==array[2][2])||(2==array[2][2])))
       return array[0][0];
    if((array[0][2]==array[1][1])&&(array[1][1]==array[2][0])&&((1==array[2][0])||(2==array[2][0])))
       return array[0][2];
       
    //caso nessun vincitore
    return 0;
    }


    
void TicTacToe::print(){
     cout<<"    0   1   2 "<<endl;  
     cout<<"  ------------- "<<endl; 
     cout<<"0 | "<<array[0][0]<<" | "<<array[0][1]<<" | "<<array[0][2]<<" |"<<endl;  
     cout<<"  ------------- "<<endl; 
     cout<<"1 | "<<array[1][0]<<" | "<<array[1][1]<<" | "<<array[1][2]<<" |"<<endl;  
     cout<<"  ------------- "<<endl; 
     cout<<"2 | "<<array[2][0]<<" | "<<array[2][1]<<" | "<<array[2][2]<<" |"<<endl;  
     cout<<"  ------------- "<<endl;  
     }


         
         
         
         
void TicTacToe::computer(){
     //controllo che non mi manchi una mossa per fare tris
     for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
          if(array[i][j]==0){
             array[i][j]=2;
             if(vincitore()==2){
                return;
               }
             else 
             array[i][j]=0;
               }    
     
     //controllo che l'avversario non faccia tris
     for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
          if(array[i][j]==0){
             array[i][j]=1;
             if(vincitore()==1){
               array[i][j]=2;
               return;
               }
             else 
             array[i][j]=0;
               }
           
     
            
     
     //visto che il mio avversario non può fare tris, barro la casella
     //in cui ho la possibilità di fare tris
     cout<<"stampa-----------\n";
     print();
     int tmp;
     for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
             if(array[i][j]==2){
               if (rigaLibera(i,j)==true){
                   while((tmp=rand()%3)==j);
                   array[i][tmp]=2;
                   cout<<"riga "<<i<<" "<<j<<" libera\n";
                   cout<<"tmp= "<<tmp<<"\n";
                   return;
                   }
               if (colonnaLibera(i,j)==true){
                   while((tmp=rand()%3)==i);
                   array[tmp][j]=2;
                   cout<<"colonna "<<i<<" "<<j<<" libera\n";
                   cout<<"tmp= "<<tmp<<"\n";
                   return;
                   }
               if (diagonaleLibera(i,j)==true){
                   while((tmp=rand()%3)==j);
                   array[tmp][tmp]=2;
                   cout<<"diagonale "<<i<<" "<<j<<" libera\n";
                   cout<<"tmp= "<<tmp<<"\n";
                   return;
                   }
               }
     
     //altrimenti, se non ci sono possibilità di vincere,
     // barro la prima casella libera;
     cout<<"Prima casella libera\n";
     for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
             if(array[i][j]==0){
                   array[i][j]=2;
                   return;
                   }
                
     }
     

bool TicTacToe::rigaLibera(int& a,int& b){
     if(a==0){
       if(((array[0][0]==0)||(array[0][0]==2))&&((array[0][1]==0)||(array[0][1]==2))&&((array[0][2]==0)||(array[0][2]==2)))
       return true;
     if(a==1)
       if(((array[1][0]==0)||(array[1][0]==2))&&((array[1][1]==0)||(array[1][1]==2))&&((array[1][2]==0)||(array[1][2]==2)))
       return true;
     if(a==2)
       if(((array[2][0]==0)||(array[2][0]==2))&&((array[2][1]==0)||(array[2][1]==2))&&((array[2][2]==0)||(array[2][2]==2)))
       return true;
       }
     return false;
     }
     
     
bool TicTacToe::colonnaLibera(int& a,int& b){
     if(b==0){
       if(((array[0][0]==0)||(array[0][0]==2))&&((array[1][0]==0)||(array[1][0]==2))&&((array[2][0]==0)||(array[2][0]==2)))
       return true;
     if(b==1)
       if(((array[0][1]==0)||(array[0][1]==2))&&((array[1][1]==0)||(array[1][1]==2))&&((array[2][1]==0)||(array[2][1]==2)))
       return true;
     if(b==2)
       if(((array[0][2]==0)||(array[0][2]==2))&&((array[1][2]==0)||(array[1][2]==2))&&((array[2][2]==0)||(array[2][2]==2)))
       return true;
       }
     return false;
     
     }
bool TicTacToe::diagonaleLibera(int& a,int& b){
     if(a==b){
        if(((array[0][0]==0)||(array[0][0]==2))&&((array[1][1]==0)||(array[1][1]==2))&&((array[2][2]==0)||(array[2][2]==2)))
        return true;
        }
     else if((a+b)==2){
        if(((array[0][2]==0)||(array[0][2]==2))&&((array[1][1]==0)||(array[1][1]==2))&&((array[2][0]==0)||(array[2][0]==2)))
         return true;
         }
     return false;
     }
