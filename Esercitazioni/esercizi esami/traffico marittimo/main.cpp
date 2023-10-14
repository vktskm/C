#include <cstdlib>
#include <iostream>

using namespace std;

#include "Simulatore.h"
#include "Mercantili.h"
#include "Passeggeri.h"

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
     int id;
     Natante* nPtr=0;
     while(scelta!=0){
     cout<<"\n\n------------------------------------\n\n";
     cout<<"Scegliere una delle seguenti opzioni:\n\n";
     cout<<"1)inserisci mercantile;\n";
     cout<<"2)inserisci nave passeggeri;\n";
     cout<<"3)modifica dati natanti;\n";
     cout<<"4)modifica la nave con ID...\n";
     
     cout<<"5)elimina natante;\n";
     cout<<"6)stampa natanti;\n";
     cout<<"7)fai avanzare tutti i natanti;\n";
     cout<<"0)esci;\n";
     cout<<"\n\nscrivi il numero dell'opzione scelta: ";
     cin>>scelta;
     switch (scelta){
            case 1:s.inserisciMercantile();cout<<"mercantile inserito!\n";break;
            case 2:s.inserisciPasseggeri();cout<<"nave passeggeri inserita!\n"; break;
            case 3:s.modificaParametriNatanti();break;
            case 4:s.stampa();cout<<"\nscrivi l'ID del natante da modificare: ";
                   cin>>id;
                   nPtr=s.cerca(id);
                   nPtr->Modifica();
                   break;
            case 5:s.stampa();cout<<"\nscrivi l'ID del natante da eliminare: ";
                   cin>>id;
                   s.cancellaNatante(id);cout<<"natante "<<id<<" cancellato!\n";break;
            case 6:s.stampa();break;
            case 7:s.faiAvanzare();cout<<"avanzamento eseguito!\n";break;
            }
     }
     }
