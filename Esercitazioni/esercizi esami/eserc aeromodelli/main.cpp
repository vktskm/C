#include <cstdlib>
#include <iostream>

using namespace std;

#include "Aeromodello.h"
#include "Aliante.h"
#include "Motore.h"
#include "Simulatore.h"

void menu(Simulatore s);

int main(int argc, char *argv[])
{
    Simulatore s;
    menu(s);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void menu(Simulatore s){
     int scelta=-1;
     while(scelta!=0){
     
     cout<<"Scegli un'opzione:\n\n";
     cout<<"1)aggiungi aliante;\n";
     cout<<"2)aggiungi aeromodello a motore;\n";
     cout<<"3)modifica stato di tutti gli aeromodelli\n";
     cout<<"4)esegui un passo di simulazione;\n";
     cout<<"5)stampa stato di tutti i modelli\n";
     cout<<"0)uscire\n";
     cout<<"scivi il numero dell'opzione scelta: ";
     cin>>scelta;
     
     switch (scelta){
            case 1: s.aggiungiAliante();cout<<"aliante aggiunto;\n";break;
            case 2: s.aggiungiMotore();cout<<"aeromodello a motore aggiunto;\n";break;
            case 3: s.modifica();break;
            case 4: s.faiAvanzare();break;
            case 5: s.print();break;
            
            }
     cout<<"\n\n------------------------------------\n\n";
     }
     }
