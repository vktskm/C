#include <cstdlib>
#include <iostream>

using namespace std;

#include <string>
using std::string;
using std::getline;

#include "Circonferenza.h"
#include "Ellisse.h"
#include "Quadrato.h"
#include "Quadrilatero.h"
#include "Rettangolo.h"
#include "Shape.h"
#include "Triangolo.h"
#include "TwoDimensionalShape.h"

   
Shape* array[100];
int indice=0;
int menu();
void eseguiScelta(int);
void disegnaArray();

int main(int argc, char *argv[])
{
    int scelta=-1;
    while (scelta!=8){
         scelta=menu();
         eseguiScelta(scelta);
         }
    system("PAUSE");
    return EXIT_SUCCESS;
}


int menu(){
    cout<<"Scegliere la figura da inserire nel vettore o una eventuale altra scelta:\n\n";
    cout<<"1)triangolo\n";
    cout<<"2)ellisse\n";
    cout<<"3)circonferenza\n";
    cout<<"4)quadrilatero\n";
    cout<<"5)rettangolo\n";
    cout<<"6)quadrato\n";
    cout<<"7)disegna figure\n";
    cout<<"8)esci\n\n";
    cout<<"Scrivere il numero corrispondente alla figura scelta: ";
    int fig;
    cin>>fig;
    return fig;
}

void eseguiScelta(int sc){
     string nom;
     getline(cin,nom);
     if((sc<=6)&&(sc>0)){
                       cout<<"\nNome figura: ";
                       getline(cin,nom);
                       }
     switch (sc){
            case 1:array[indice]=new Triangolo;break;
            case 2:array[indice]=new Ellisse;break;
            case 3:array[indice]=new Circonferenza;break;
            case 4:array[indice]=new Quadrilatero;break;
            case 5:array[indice]=new Rettangolo;break;
            case 6:array[indice]=new Quadrato;break;  
            case 7:disegnaArray();
                   break;
            case 8:exit(0);break; 
            }
     if((sc<=6)&&(sc>0)){
                 array[indice]->setNome(nom);
                 cout<<"\n";
                 array[indice]->interagisciUtente();
                 cout<<"\n";
                 indice++;
                 }
     }
     
void disegnaArray(){
              for(int i=0;i<indice;i++){
                 cout<<"\n";
                 array[i]->draw();
                 cout<<"\n";
                 }
                system("pause");
              }
/*
schema seguito:
       
                            
               |------------->Triangolo
               |
               |
               |                     
               |                     
Shape-->TwoDimensionalShape
               |
               |
               |------------->Ellisse------------------->Circonferenza
               |                 
               |
               |
               |------------->Quadrilatero--------------->Rettangolo---------->Quadrato
                               
               
               
               
*/
