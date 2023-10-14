#include <cstdlib>
#include <iostream>
using std::fixed;

#include <iomanip>

using namespace std;

#include "Poker.h"

int probabilita[9]={0};
double mazzo[32]={0};
bool carteUscite[4][8];


int main(int argc, char *argv[])
{
    cout<<"Seleziono nel codice una combinazione di carte a piacere.\n\n";
    //inizializzo il vettore mazzo
      inizializzaMazzo();
    srand(time(0));
   
    //selezioniamo delle carte a nostro piacere per il vettore 'giocatore':
    double giocatore[]={9.1,14.2,7.1,14.3,10.2};
    
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
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
