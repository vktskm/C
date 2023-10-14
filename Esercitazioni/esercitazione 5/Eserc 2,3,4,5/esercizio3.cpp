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
   
    setProbabilita(10000);
    cout<<"STAMPA PROBABILITA':\n\n";
    for(int i=0;i<9;i++){
        displayPunteggio((Punteggio)i);
        cout<<" = "<<setprecision(2)<<fixed<<(100.0*probabilita[i]/10000)<<"%;\n\n";
        }
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
