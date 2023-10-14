#include <cstdlib>
#include <iostream>

#include "TicTacToe.h"

#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

void giocaConAmico();
void giocaConComputer(char ch);

int main(int argc, char *argv[])
{
    int scelta=0;
    while((scelta!=1)&&(scelta!=2)){
      cout<<"Scegli il numero di giocatori:\nscrivi 1 se vuoi giocare contro il computer,\nscrivi 2 se vuoi giocare con un amico.\n";
      cin>>scelta;
    }
    char ch;
    switch (scelta){
           case 1:cout<<"vuoi iniziare tu per primo(y/n)?";
                  cin>>ch;
                  giocaConComputer(ch);break;
           case 2:giocaConAmico();break;
           }
    
    system("PAUSE");
    
    return EXIT_SUCCESS;
}


void giocaConAmico(){
    int a,b,vincitore=0,numeroMosse=0;
    TicTacToe t;
    cout<<"-------------------------------------\n";
    t.print();
    while(vincitore==0){
      cout<<"Gioca il primo giocatore:\n";
      cin>>a>>b;
      while(t.giocatore1(a,b)==false){
                               cout<<"CASELLA OCCUPATA. Ripetere la mossa.\n";
                               cin>>a>>b;
                               }
      vincitore=t.vincitore();
      cout<<"-------------------------------------\n";
      t.print();
      numeroMosse++;
      if(numeroMosse==9)break;
      if(vincitore==0){
                      cout<<"Gioca il secondo giocatore:\n";
                      cin>>a>>b;
                      while(t.giocatore2(a,b)==false){
                               cout<<"CASELLA OCCUPATA. Ripetere la mossa.\n";
                               cin>>a>>b;
                               }
                      vincitore=t.vincitore();
                      cout<<"-------------------------------------\n";
                      t.print();
                      numeroMosse++;
                      }
    }
    if(vincitore!=0)
        cout<<"IL VINCITORE E' IL GIOCATORE NUMERO "<<vincitore<<"\n";
    else
        cout<<"Parita'\n";
     }

void giocaConComputer(char ch){
    int a,b,vincitore=0,numeroMosse=0;
    TicTacToe t;
    cout<<"-------------------------------------\n";
    t.print();
    srand(time(0));
    while((vincitore==0)&&(numeroMosse!=9))
    switch (ch){
           case'y':
                   cout<<"Tocca a te:\n";
                   cin>>a>>b;
                   while(t.giocatore1(a,b)==false){
                               cout<<"CASELLA OCCUPATA. Ripetere la mossa.\n";
                               cin>>a>>b;
                               }
                   vincitore=t.vincitore();
                   cout<<"-------------------------------------\n";
                   t.print();
                   numeroMosse++;
                   ch='n';
                   break;
                        
                    
           case 'n':
                   if(numeroMosse==0){
                                      cout<<"scelta casuale\n";                               t.giocatore2(rand()%3,rand()%3);
                                      }
                   else                   
                       t.computer();
                   vincitore=t.vincitore();
                   cout<<"-------------------------------------\n";
                   t.print();
                   numeroMosse++;
                   ch='y';
                   break;
           }
    if(vincitore==1)
        cout<<"COMPLIMENTI HAI VINTO!!!\n";
    else if(vincitore==2)
        cout<<"Peccato, hai perso :(\n";
    else
        cout<<"Parita'\n";
    
}
    
    
    
    
   
