#include <cstdlib>
#include <iostream>
 
using namespace std;

#include "String.h"
int main(int argc, char *argv[])
{    
    
    cout<<"Prova dell'operatore '=':\n";
    String str1("prima stringa","str1");
    String str2("seconda stringa","str2");
    str1=str2;
    str1.stampa();
    cout<<"\n\n";
      
    cout<<"Prova dell'operatore '+':\n";
    //invoco sia il costruttore di copie che l'operatore '+'
    str1="prima Stringa";
    str1.stampa();
    String str4("quarta stringa","str4");
    String str5("quinta stringa","str5");
    
    String str3=str1+str4+str5;
    str3.stampa();
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
