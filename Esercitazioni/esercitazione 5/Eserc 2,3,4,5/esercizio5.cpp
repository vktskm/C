#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;


#include <iomanip>
using std::setw;
using std::fixed;
using std::setprecision;

#include <cstring>
using std::getline;
using std::string;



#include "Poker.h"

int probabilita[9]={0};
double mazzo[32]={0};
bool carteUscite[4][8];

int main(int argc, char *argv[])
{   
    int vincitore=-1;
    string scelta="y";
    string str;   
    
    //Il programma gioca con un numero di giocatori uguale a 
    //numGiocatori (da selezionare nel codice);
    //si consiglia di porre numGiocatori=2 o numGiocatori=3
    //per evitare che non si rimanga nel ciclo del rand per molto tempo.         
    //per default l'utente è sempre il giocatore numero 1.
    //Il programma permette che le carte degli altri giocatori siano
    //visibili dall'utente in modo da poter verificare che il
    //computer giochi secondo una logica corretta, cioè per
    //verificare che sostituisca le carte corrette.
    
    cout<<"Il programma gioca con un numero di giocatori uguale a\n"<< 
          "numGiocatori (da selezionare nel codice);\n"<<
          "si consiglia di porre numGiocatori=2 o numGiocatori=3"<<
          "per evitare che non si rimanga nel ciclo del rand per molto tempo."<<
          "per default l'utente e' sempre il giocatore numero 1.\n"<<
          "Il programma permette che le carte degli altri giocatori siano\n"<<
          "visibili dall'utente in modo da poter verificare che il\n"<<
          "computer giochi secondo una logica corretta, cioe' per\n"<<
          "verificare che sostituisca le carte corrette.\n";
    
    
    //inizializzo il vettore mazzo
    inizializzaMazzo();
    
    //si consiglia di usare 2 o 3 giocatori: gia con tre giocatori
    //si rischia di rimanere nel ciclo del rand() per un bel po'.
    //inizializzo il numero dei giocatori (compreso l'utente):
    const int numGiocatori=3;
   
    //creo la matrice dei giocatori:
    double giocatori [numGiocatori][5]; 
    
    //la seguente matrice conterrà quali carte cambiare per la 
    //seconda mano per ogni giocatore 
    bool carteDaCambiare[numGiocatori][5];
while(scelta=="y"){//aperture ciclo while
    srand(time(0));
    for(int i=0;i<numGiocatori;i++)
               for(int j=0;j<5;j++)
                       carteDaCambiare[i][j]=false;
        
    //distribuisco le carte per la prima mano
    cout<<"\n\n------------------------------------------\nPRIMA MANO:\n\n";
    daiCartePrimaMano(giocatori,numGiocatori);
      
    //visualizzo le carte degli altri giocatori con il relativo
    //punteggio (solo per 
    //vedere se il pc gioca logicamente, le regole non lo prevedono)
    for (int i=1;i<numGiocatori;i++){
          cout<<"\nGiocatore "<<i+1<<":\n";
          displayCarte(giocatori[i]);
          cout<<"\npunteggio attuale = ";
          displayPunteggio(getPunteggio(giocatori[i]));
          cout<<"\n\n";
          }
    
    //visualizzo le carte dell'utente
    cout<<"\nCARTE UTENTE:\n";
    displayCarte(giocatori[0]);
    cout<<"\npunteggio attuale = ";
    displayPunteggio(getPunteggio(giocatori[0]));
           
    //chiedo all'utente quali carte cambiare:
    cout<<"\n\nScrivere il numero delle carte da cambiare separate dallo spazio(es.: 2 3): "; 
    getline(cin,str);
    for(int i=0;(str[i]!=0);i++){
      if(str[i]!=32){
        carteDaCambiare[0][str[i]-49]=true;
         }
       }
    
    //faccio giocare il computer: deve decidere quali 
    //carte cambiare per gli altri giocatori
    for (int i=1;i<numGiocatori;i++)
       giocaComputer(giocatori[i],carteDaCambiare[i]);
    
    //gioco la seconda mano
    cout<<"\n\n------------------------------------------\nSECONDA MANO:\n\n";
    daiCarteSecondaMano(giocatori,numGiocatori,carteDaCambiare);

    //controllo di nuovo le carte degli altri giocatori:
    for (int i=1;i<numGiocatori;i++){
          cout<<"\nGiocatore "<<i+1<<":\n";
          displayCarte(giocatori[i]);
          cout<<"\npunteggio attuale = ";
          displayPunteggio(getPunteggio(giocatori[i]));
          cout<<"\n\n";
          }
    
    //ricontrollo le carte dell'utente
    cout<<"\nCARTE UTENTE:\n";
    displayCarte(giocatori[0]);
    cout<<"\npunteggio attuale = ";
    displayPunteggio(getPunteggio(giocatori[0]));
    
    //dichiaro il vincitore
    vincitore=getGiocatoreMigliorPunteggio(giocatori,numGiocatori);
    cout<<"\n\nIl vincitore e' il giocatore numero: ";
    if(vincitore==0)   
       cout<<"nessuno\n\n";
    else if(vincitore==1)
       cout<<vincitore<<"\n\n\nCOMPLIMENTI HAI VINTO!!!\n\n";
    else
       cout<<vincitore;
       
    //chiedo all'utente se vuole giocare di nuovo
    cout<<"\n\nVuoi giocare ancora(y/n)? ";
    getline(cin,scelta);
}//chiusura ciclo while


/*
double giocatore[5]={7.3,9.1,10.0,13.3,14.2};

 //il seguente vettore conterrà quali carte cambiare
    bool carteDaCambiare[5];
    
    //ordino le carte in maniera crescente (ciò mi facilita l'individuazione del punteggio)
    ordina(giocatore);
    
    //faccio giocare il computer:
    giocaComputer(giocatore,carteDaCambiare);
    
    //controllo se ha fatto la scelta giusta:
    cout<<"CARTE RICEVUTE:\n";
    displayCarte(giocatore);
    cout<<"\n";
    
    cout<<"CARTE DA CAMBIARE:\n";
    for(int i=0;i<5;i++)
       if(carteDaCambiare[i]==true){
          displayCarta(giocatore[i]);
          }
*/

    system("PAUSE");
    return EXIT_SUCCESS;
}
