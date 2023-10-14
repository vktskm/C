#include <cstdlib>
#include <iostream>

using namespace std;

#include "Piazzola.h"
#include "Campeggio.h"
#include "Bungalow.h"



void menu(Campeggio c);
void modifica(Campeggio c);

int main(int argc, char *argv[])
{
    
    
    Piazzola p1(1,50,0,110,110,1,1),p2(2,51,1,220,220,1,0),p3(3,52,1,330,30,0,1);
    Bungalow b1(4,200,0,4,1),b2(5,250,0,5,1);
    Posto* elenco[]={&p1,&p2,&p3,&b1,&b2};
    Campeggio c("Monte Bianco","via Delle Alpi",elenco,5);
    menu(c);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void menu(Campeggio c){
     
     int scelta;
     while(scelta!=0){
        cout<<"Scegliere una delle opzioni seguenti:\n\n";
        cout<<"1)stampa posti\n";
        cout<<"2)modifica stato occupazione;\n";
        cout<<"0)per uscire;\n";
        cin>>scelta;
        switch (scelta){
            case 1:c.print();break;
            case 2:modifica(c);break;
            
            }
            
        }
     }
     
void modifica(Campeggio c){
     int id;
     bool b;
     cout<<"Scrivi l'ID del posto di cui vuoi modificare lo stato d'occupazione: ";
     cin>>id;
     if(id>c.getNumeroPosti()){
        cout<<"ID non valido.";
        return;
        }
     cout<<"Stato attuale occupazione: "<<c.getStatoOccupaz(id)<<"\n";
     cout<<"Scrivi il nuovo stato occupazionale: ";
     cin>>b;
     c.modificaOccupaz(id,b);
     }

