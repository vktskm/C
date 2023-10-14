#include <cstdlib>
#include <iostream>

using namespace std;

#include "String.h"
int main(int argc, char *argv[])
{   /*
    //parte di codice che testa i metodi del programma
    
    String str("Mondo");
    cout<<"Stampo str:\n";
    str.stampa();
     
    String str1(str,1,3);
    cout<<"\n\nStampo str1 ottenuta con un altro costruttore(sottostringa di str):\n";
    str1.stampa();
    cout<<"\nlunghezza:"<<str1.len();
        
    cout<<"\n\nStampo la lunghezza di str:\n"<<str.len();
    
    cout<<"\n\nCopio str in str1:\n";
    str1.copy(str);    
    str1.stampa();
    cout<<"\n"; 
      
    String frase1("a"),frase2("ab");
    cout<<"\n\nConfronto frase1 con frase2:\n"<<frase1.compare(frase2);
 
    String str2("c'era "), str3("una "),str4("volta");
    cout<<"\n\nTest metodo append:\n";
    cout<<"\n\nstr2:\n";
    str2.stampa();
    cout<<"\n\nstr3:\n";
    str3.stampa();
    cout<<"\n\nstr4:\n";
    str4.stampa();
    cout<<"\n\n";
    str2.append(str3).append(str4);
    str2.stampa();
    cout<<"\n";
    */
    
    String str1("prima Stringa");
    String str4("quarta stringa");
    String str5("quinta stringa");
    String str3;
    str3.append(str1).append(str4).append(str5);
    str3.stampa();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
