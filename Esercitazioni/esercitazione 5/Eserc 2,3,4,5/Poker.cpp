
#include <cstdlib>
#include <iostream>

using namespace std;

#include <cmath>

#include "Poker.h"

extern bool carteUscite[4][8];
extern int probabilita[9];
extern double mazzo[32];

int getGiocatoreMigliorPunteggio(const double giocatori[][5],const int numGiocatori){
           int vincitore=0;//0 = nessun vincitore;
           int i;
           
           Punteggio maxPunt1=nulla,maxPunt2=nulla;
           int indiceVincitore=-1;
           for(i=0;(i<numGiocatori);i++){
                       if(indiceVincitore!=-1)break;
                       if(getPunteggio(giocatori[i])!=0){
                            indiceVincitore=i;
                            maxPunt1=getPunteggio(giocatori[indiceVincitore]);
                            }
                        }
           for(;i<numGiocatori;i++){
                if(maxPunt1>getPunteggio(giocatori[i]))
                    continue;
                else if(maxPunt1==getPunteggio(giocatori[i])){
                     maxPunt2=maxPunt1;
                     }
                else
                    indiceVincitore=i;
                    maxPunt2=maxPunt1;
                    maxPunt1=getPunteggio(giocatori[i]);
                }     

           if(maxPunt2==maxPunt1)
              return 0;//nessun vincitore
           else return indiceVincitore+1;
          
                                   }


void displayPunteggio(Punteggio p){
      switch (p){
           case 0:cout<<"nulla";break;
           case 1:cout<<"coppia";break;
           case 2:cout<<"doppia coppia";break;
           case 3:cout<<"tris";break;
           case 4:cout<<"scala";break;
           case 5:cout<<"full";break;
           case 6:cout<<"colore";break;
           case 7:cout<<"poker";break;
           case 8:cout<<"scala reale";break;
           }
     }

void setNextSemeValore(double* seme,double* valore){
     (*valore)++;
     if(*valore==15){ 
          *valore=7;
          (*seme)++;
          if (*seme==5)
              *seme=0;
          }
     }

void inizializzaMazzo(){
     double seme=0.0;
     double valore=7.0;
     double cartaIniziale;
     for(int i =0;i<32;i++){
        cartaIniziale=valore+seme/10;
        mazzo[i]=cartaIniziale;
        setNextSemeValore(&seme,&valore);
        }
     }



void daiCartePrimaMano(double giocatori[][5],const int numGiocatori){
     //inizializzo il vettore bool carteUscite;
      for (int i=0;i<4;i++)
          for (int j=0;j<8;j++)
             carteUscite[i][j]=false;
     
     //inizializzo il mazzo
     inizializzaMazzo();                  
     
     double carta;
     for (int i=0;i<numGiocatori;i++){
          for (int j=0;j<5;j++){
                          carta=getNewCarta();
                              giocatori[i][j]=carta;
            }
            ordina(giocatori[i]);
     }
               
    }


int getSeme(const double carta){
    double d=(carta*10);
    return (int)d%10;    
    }

int getValore(const double carta){
    return (int)(floor(carta));
    }

void displayCarta(const double carta){
     int valore=getValore(carta);
     cout<<valore;
     int seme=getSeme(carta);
               switch (seme){
                      case 0:cout<<'\3'<<";    ";break;//cuori
                      case 1:cout<<'\4'<<";    ";;break;//quadri
                      case 2:cout<<'\5'<<";    ";;break;//fiori
                      case 3:cout<<'\6'<<";    ";;break;//picche
                      default:cout<<" ERRORE; ";break;
                      }
     }

void displayCarte(const double giocatore[]){
      int seme=0;
      int valore=0;   
      for (int j=0;j<5;j++){
               displayCarta(giocatore[j]);
                      }
      }

void displayCarteTutti(const double giocatori[][5],const int numGiocatori){
     for (int i=0;i<numGiocatori;i++){
          cout<<"Giocatore "<<i+1<<":\n";
          displayCarte(giocatori[i]);
          cout<<"\n\n";
          }
     }

Punteggio getPunteggio(const double giocatore[]){
    int i=0;
    bool flag;
       
    //caso scala reale
    flag=true;
    for(int i=0;i<4;i++){
       if((getSeme(giocatore[i])==getSeme(giocatore[i+1]))&&(getValore(giocatore[i])==getValore(giocatore[i+1]+1)))
           continue;
       else{ 
           flag=false;
           break;
           }
       }
    if(flag) return scala_reale;
    
    //caso scala
    flag=true;
    for(int i=0;i<4;i++)
       if(floor(giocatore[i])==floor((giocatore[i+1]-1)))
           continue;
       else{ 
           flag=false;
           break;
           }
    if(flag) return scala;
   
   //caso colore
    flag=true;
    for(int i=0;i<4;i++)
       if(((giocatore[i]-floor(giocatore[i]))*10)==((giocatore[i+1]-floor(giocatore[i+1]))*10))
           continue;
       else{ 
           flag=false;
           break;
           }
    if(flag) return colore;
   
   //altri casi
   int tmp[8]={0};//vettore di controllo (è usato per inserirvi quante volte è ripetuta una carta)
   for (int i=0;i<5;i++){
      tmp[static_cast<int>(floor(giocatore[i])-7)]++;
   }
   bool coppiaBool=false,trisBool=false;
   for (int i=0;i<8;i++){
       if(tmp[i]==4) return poker;
       else if(tmp[i]==3) trisBool=true;
       else if((tmp[i]==2)&&(coppiaBool==true))return doppia_coppia;
       else if((tmp[i]==2)&&(coppiaBool==false))coppiaBool=true;
       }
   if((coppiaBool)&&(trisBool)) return full;  
   if(coppiaBool) return coppia;
   if(trisBool)return tris;
   return nulla;  
  }

void ordina(double giocatore[]){
     //algoritmo bubble sort
     double tmp;
     int dim=5;
     bool flag=false;
     for(int j=0;j<=dim+1;j++){
       if(!flag){
       flag=true;
       for(int i=0;i<(dim-1);i++){
         if(giocatore[i]>giocatore[i+1]){
           tmp=giocatore[i+1];
           giocatore[i+1]=giocatore[i];
           giocatore[i]=tmp;
           flag=false;
           }
         }
        
        dim--;
        }
        }
    
}

void setProbabilita(int numMani){
     //simulo la giocata di un singolo giocatore
     double giocatori [1][5];
     for (int i=0;i<numMani;i++){
        daiCartePrimaMano(giocatori,1);
        probabilita[(int)(getPunteggio(giocatori[0]))]=probabilita[(int)(getPunteggio(giocatori[0]))]+1;
        }
     }

void daiCarteSecondaManoSingoloGiocatore(double giocatore[],bool carteDaCambiare[]){
     for (int i=0;i<5;i++){
        if(carteDaCambiare[i]==true)
            giocatore[i]=getNewCarta();
            }
     }


double getNewCarta(){
       int indiceMazzo=rand()%32;
       double carta=mazzo[indiceMazzo]; 
       while(carteUscite[getSeme(carta)][getValore(carta)]==true){
                                 indiceMazzo=rand()%32;
                                 carta=mazzo[indiceMazzo]; 
                                 }
       carteUscite[getSeme(carta)][getValore(carta)]=true;                    
       return carta;
       }


void giocaComputer(double giocatore[], bool carteDaCambiare[]){
     //inizializzo il vettore carteDaCambiare
     for(int i=0;i<5;i++)
        carteDaCambiare[i]=false;
        
     //valuto la mano
     Punteggio punt=getPunteggio(giocatore);
     switch (punt){
            case scala_reale:
            case poker:
            case colore:
            case full:
            case scala:return;break;
            case tris:giocaTris(giocatore,carteDaCambiare);break;          
            case doppia_coppia:giocaDoppiaCoppia(giocatore,carteDaCambiare);break;
            case nulla:
            case coppia:giocaPuntiMancati(punt,giocatore,carteDaCambiare);break;
            default:cout<<"ERRORE IN giocaComputer";break;
            }
     }

void giocaTris(const double giocatore[],bool carteDaCambiare[]){
      if(getValore(giocatore[0])==getValore(giocatore[1])){
          carteDaCambiare[3]=carteDaCambiare[4]=true;
          }
      else if(getValore(giocatore[1])==getValore(giocatore[2])) {
          carteDaCambiare[0]=carteDaCambiare[4]=true;
          }
      else {
          carteDaCambiare[0]=carteDaCambiare[1]=true;
          }
     }
     
void giocaDoppiaCoppia(const double giocatore[],bool carteDaCambiare[]){
     if((getValore(giocatore[0])==getValore(giocatore[1]))&&(getValore(giocatore[2])==getValore(giocatore[3])))
         carteDaCambiare[4]=true;
     if((getValore(giocatore[0])==getValore(giocatore[1]))&&(getValore(giocatore[3])==getValore(giocatore[4])))
         carteDaCambiare[2]=true;
     if((getValore(giocatore[1])==getValore(giocatore[2]))&&(getValore(giocatore[3])==getValore(giocatore[4])))
         carteDaCambiare[0]=true;
     }
     
void giocaCoppia(const double giocatore[],bool carteDaCambiare[]){
     if(getValore(giocatore[0])==getValore(giocatore[1]))
        carteDaCambiare[2]=carteDaCambiare[3]=carteDaCambiare[4]=true;
     if(getValore(giocatore[1])==getValore(giocatore[2]))
        carteDaCambiare[0]=carteDaCambiare[3]=carteDaCambiare[4]=true;
     if(getValore(giocatore[2])==getValore(giocatore[3]))
        carteDaCambiare[0]=carteDaCambiare[1]=carteDaCambiare[4]=true;
     if(getValore(giocatore[3])==getValore(giocatore[4]))
        carteDaCambiare[0]=carteDaCambiare[1]=carteDaCambiare[2]=true;
     }

void giocaPuntiMancati(Punteggio punt,double giocatore[],bool carteDaCambiare[]){
     //verifico se c'è un colore mancato per una sola carta:
     ordinaSecondoIlColore(giocatore);
     int i;
     double cartaCambiare;
           //caso prime 4 carte dello stesso colore:
           for(i=0;(i<4)&&
                   (getSeme(giocatore[i])==getSeme(giocatore[i+1]));i++);
                   if (i==3){
                     cartaCambiare=giocatore[4];
                     ordina(giocatore);
                     for(int t=0;t<5;t++)
                         if(giocatore[t]==cartaCambiare){
                            carteDaCambiare[t]=true;
                            break;
                            }
                     return;
                     }
          //caso ultime 4 carte dello stesso colore:
          for(i=1;(i<5)&&
                   (getSeme(giocatore[i])==getSeme(giocatore[i+1]));i++);
                   if (i==4){
                     cartaCambiare=giocatore[0];
                     ordina(giocatore);
                     for(int t=0;t<5;t++)
                         if(giocatore[t]==cartaCambiare){
                            carteDaCambiare[t]=true;
                            break;
                            }
                     return;
                     }
     
     //verifico se c'è una scala mancata per una sola carta:
              ordina(giocatore);
              int indiceDaCambiare=-1;
              bool cartaSaltata=false;
              for(i=0;i<4;i++){
                  if(getValore(giocatore[i])==getValore(giocatore[i+1])-1){
                           continue;
                           }
                  else if(cartaSaltata==false){
                           cartaSaltata=true;
                           indiceDaCambiare=4;
                           }
                  else {
                       indiceDaCambiare=-1;
                       break;
                       }        
                           }
               if (indiceDaCambiare!=-1){
                        carteDaCambiare[indiceDaCambiare]=true;
                        return;
                        } 

      //se arriviamo a questa parte di codice allora vuol dire che
      //abbiamo o solo una semplice coppia o nulla:
      if (punt==coppia)
                giocaCoppia(giocatore,carteDaCambiare);     
      else //ricambiamo tutte e 5 le carte
          for(int k=0;k<5;k++)
             carteDaCambiare[k]=true;
     }

void ordinaSecondoIlColore(double giocatore[]){
     //bubble sort
     double tmp;
     int dim=5;
     bool flag=false;
     for(int j=0;j<=dim+1;j++){
       if(!flag){
       flag=true;
       for(int i=0;i<(dim-1);i++){
         if(getSeme(giocatore[i])>getSeme(giocatore[i+1])){
           tmp=giocatore[i+1];
           giocatore[i+1]=giocatore[i];
           giocatore[i]=tmp;
           flag=false;
           }
         }
        
        dim--;
        }
        }
    
}

void daiCarteSecondaMano(double giocatori[][5],const int numGiocatori,bool carteDaCambiare[][5]){
     for(int i=0;i<numGiocatori;i++){
       daiCarteSecondaManoSingoloGiocatore(giocatori[i],carteDaCambiare[i]);
       ordina(giocatori[i]);
       }
     }

            
