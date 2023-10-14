#include <cstdlib>
#include <iostream>
 
using namespace std;
 
#include "String.h"
int main(int argc, char *argv[])
{    
      
    cout<<"-------Prova dell'operatore '='-------\n";
    String str1("prima stringa");
    String str2("seconda stringa");
    str1=str2;
    str1.stampa();
    cout<<"\n\n";
       
    cout<<"-------Prova dell'operatore '+'-------\n";
    str1="prima stringa, ";
    String str4("seconda stringa, ");
    String str5("quinta stringa");
    //invoco sia il costruttore di copie che l'operatore '+'
    String str3=str1+str4+str5;
    str3.stampa();
  
    cout<<"\n\n-------Prova dell'operatore '==','>'-------\n";
    String a("asd"),b("bsd");
    if(a==b){
       cout<<"Le stringhe ";a.stampa();cout<<" e ";b.stampa();cout<<" sono uguali";
       }
    else{
       cout<<"Le stringhe ";a.stampa();cout<<" e ";b.stampa();cout<<" non sono uguali";
       }
       
    cout<<"\n\n";
    if(a>b){
       cout<<"La stringa ";a.stampa();cout<<" e' strettamente maggiore di ";b.stampa();
       }
    else{
       cout<<"La stringa ";a.stampa();cout<<" non e' strettamente maggiore di ";b.stampa();
       }
        
    cout<<"\n\n-------Prova dell'operatore '<<'-------\n";
    String z("ciaoo  oo");
    cout<<z;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
