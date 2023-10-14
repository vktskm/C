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
    //inizializzo il vettore mazzo
      inizializzaMazzo();
    srand(time(0));
   
    const int numGiocatori=2;
    
    double giocatori[numGiocatori][5];//ogni giocatore è un vettore di double:
                                      //la parte intera del double indica il valore 
                                      //della carta uscita, mentre la perte decimale
                                      //indica il seme
    daiCartePrimaMano(giocatori,numGiocatori);
    displayCarteTutti(giocatori,numGiocatori);
    
    cout<<"Giocatore 1:\npunteggio = \n";
    displayPunteggio(getPunteggio(giocatori[0]));
    cout<<"\n\n";
    
    cout<<"Giocatore 2:\npunteggio = \n";
    displayPunteggio(getPunteggio(giocatori[1]));
    cout<<"\n\n";
    
    int vincitore=getGiocatoreMigliorPunteggio(giocatori,numGiocatori);
    cout<<"Il miglior punteggio e'del giocatore: ";
    if(vincitore==0)
       cout<<"nessuno\n";
    else
       cout<<vincitore<<"\n";
  
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
