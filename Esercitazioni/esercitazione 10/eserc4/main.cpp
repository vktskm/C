/*
 Il programma non fa uso di vettori ma solamente di files;
 ciò vuol dire che ogni modifica, come ad esempio la cancellazione
 di un elemento dalla rubrica, è fatto solo attraverso la modifica
 diretta di files. Ho voluto prendere questa scelta solo
 per esercitarmi sui files, anche se l'uso di vettori
 avrebbe probabilmente facilitato alcune operazioni. 
*/
#include <cstdlib>
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

#include "Rubrica.h"

int num;
Elemento el;
char str[40];

int menu(){
     int sc;
     cout<<"\n--------------------------------------------\n";
     cout<<"Scegliere tra le seguenti opzioni:\n";
     cout<<"\n";
     cout<<"1)crea/apri/cambia rubrica\n";
     cout<<"2)scrivi nome rubrica corrente\n";
     cout<<"3)inserisci elemento\n";
     cout<<"4)stampa elenco\n";
     cout<<"5)modifica elemento\n";
     cout<<"6)cerca elemento\n";
     cout<<"7)cancella elemento\n";
     cout<<"0)esci\n";
     cout<<"\nScrivere il numero dell'opzione scelta: ";
     cin>>sc;
     return sc;
     }

int main(int argc, char *argv[])
{
    char ch;
    int scelta;
    Rubrica r;
    while(scelta=menu()){
       switch (scelta){
           case 1:
                char nom[20];
                cout<<"\n--------------------------------------------\n";
                cout<<"\nScrivi il nome che vuoi dare alla rubrica: ";
                cin>>setw(20)>>nom;
                bool b;
                b=r.setNomeRubrica(nom);
                if(b){
                cout<<"Se il file relativo al nome inserito esiste gia', allora sarà caricato quel file. Altrimenti verra' creata una nuova rubrica con il nome appena inserito.\n";
                system("pause");
                }
                break;
           case 2:
                cout<<"\n--------------------------------------------\n";
                cout<<"Nome rubrica corrente: "<<r.getNomeRubrica();
                cout<<"\nPuoi cambiare rubrica e caricarne una nuova, o modificare il nome della rubrica corrente (solo se il file relativo alla rubrica corrente non e' stato creato) scegliendo '1' al menu principale.\n";
                system("pause");
                break;
           case 3:
                char n[40],c[40],nt[40];
                cout<<"\n--------------------------------------------\n";
                cout<<"Nome: ";
                cin>>n;
                cout<<"\nCognome: ";
                cin>>c;
                cout<<"\nNumero telefono: ";
                cin>>nt;
                r.inserisci(n,c,nt);
                break;
           case 4:
                cout<<"\n--------------------------------------------\n";
                r.print();
                system("pause");
                break;
           case 5:
                int sc;
                cout<<"\n--------------------------------------------\n";
                cout<<"Fase di ricerca dell'elemento da modificare:\n\n";
                cout<<"Scegliere il criterio di ricerca:\n\n";
                cout<<"1)nome;\n";
                cout<<"2)cognome;\n";
                cout<<"3)numero telefono;\n";
                cout<<"0)torna al menu principale;\n\n";
                cout<<"Scrivere il numero dell'opzione scelta: ";
                cin>>sc;
                
                num=0;
                int start;
                start=1;
                switch (sc){
                       case 1:cout<<"\n\nScrivi il nome per la ricerca: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Modificare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          cout<<"\nScrivi il nuovo nome: ";
                                          cin>>str;
                                          r.modifica(el,num,campoNome,str);
                                          cout<<"\nModifica effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 2:cout<<"\n\nScrivi il cognome per la ricerca: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoCognome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Modificare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          cout<<"\nScrivi il nuovo cognome: ";
                                          cin>>str;
                                          r.modifica(el,num,campoCognome,str);
                                          cout<<"\nModifica effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 3:cout<<"\n\nScrivi il numero di telefono per la ricerca: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNumeroTelefono,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Modificare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          cout<<"\nScrivi il nuovo numero di telefono: ";
                                          cin>>str;
                                          r.modifica(el,num,campoNumeroTelefono,str);
                                          cout<<"\nModifica effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                             }
                
                system("pause");
                break;
           case 6:
                cout<<"\n--------------------------------------------\n";
                cout<<"Fase di ricerca:\n\n";
                cout<<"Scegliere il criterio di ricerca:\n\n";
                cout<<"1)nome;\n";
                cout<<"2)cognome;\n";
                cout<<"3)numero telefono;\n";
                cout<<"0)torna al menu principale;\n\n";
                cout<<"Scrivere il numero dell'opzione scelta: ";
                cin>>sc;
                num=0;
                start=1;
                switch (sc){
                       case 1:cout<<"\n\nScrivi il nome: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             cout<<"Elemento/i trovato/i:\n\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 2:cout<<"\n\nScrivi il cognome: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             cout<<"Elemento/i trovato/i:\n\n";
                             while(num!=-1){
                                 num=r.getElemento(campoCognome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 3:cout<<"\n\nScrivi il numero: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             cout<<"Elemento/i trovato/i:\n\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNumeroTelefono,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    }
                                 }
                             break;
                             }
                
                system("pause");
                break;
           case 7:
                cout<<"\n--------------------------------------------\n";
                cout<<"Fase di ricerca dell'elemento da cancellare:\n\n";
                cout<<"Scegliere il criterio di ricerca:\n\n";
                cout<<"1)nome;\n";
                cout<<"2)cognome;\n";
                cout<<"3)numero telefono;\n";
                cout<<"0)torna al menu principale;\n\n";
                cout<<"Scrivere il numero dell'opzione scelta: ";
                cin>>sc;
                
                num=0;
                
                start=1;
                switch (sc){
                       case 1:cout<<"\n\nScrivi il nome per l'elemento da cancellare: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Cancellare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          r.cancella(num);
                                          cout<<"\nCancellazione effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 2:cout<<"\n\nScrivi il cognome per l'elemento da cancellare: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoCognome,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Cancellare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          r.cancella(num);
                                          cout<<"\nCancellazione effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                       case 3:cout<<"\n\nScrivi il numero di telefono per l'elemento da cancellare: ";
                             cin>>str;
                             cout<<"\n--------------------------------------------\n";
                             while(num!=-1){
                                 num=r.getElemento(campoNumeroTelefono,str,el,start);
                                 if(num!=-1){
                                    start=num+numeroCampiElemento;
                                    el.print();
                                    cout<<"\n";
                                    cout<<"Cancellare questo elemento(y/n)? ";
                                    cin>>ch;
                                    cout<<"\n";
                                    if(ch=='n')
                                        continue;
                                    else if(ch=='y'){
                                          r.cancella(num);
                                          cout<<"\nCancellazione effettuata.\n";
                                          break;
                                        }
                                    cout<<"\n";
                                    }
                                 }
                             break;
                             }
                
                system("pause");
                break;
           case 0:exit(0);
                
                }
    /*
    Rubrica r("elea1.txt");
    
   
    r.inserisci("q","w","2345");
    r.inserisci("ty","e","2345");
    r.inserisci("tt","y","2345");
    
    cout<<"\n-------------\nSTAMPA INIZIALE\n";
    r.print();
    
    Elemento tmp;
    int num=r.getElemento(campoNome,"ty",tmp);
    cout<<"\nELEMENTO DA MODIFICARE\n";
    cout<<num;
    tmp.print();
    
    cout<<"\n\n";
    r.modifica(tmp,num,campoNome,"mario");

    cout<<"\n-------------\nSTAMPA FINALE\n";
    r.print();
   */
   
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
