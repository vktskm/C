#include <cstdlib>
#include <iostream>

using namespace std;

#include "Persona.h"
#include "Studente.h"

int main(int argc, char *argv[])
{
    cout<<"Prova invocazione metodo print2 con oggetti:\n";
    Persona p("Mario","Rossi","asdf");
    Studente s;
    cout<<"\nPrint2 su un oggetto Persona:\n";
    p.print2();
    cout<<"\n\nPrint2 su un oggetto Studente:\n";
    s.print2();
    
    cout<<"\n\n-----------------------------------------\n\n";
    
    cout<<"Prova invocazione metodo print2 con un Persona*:\n";
    Persona* pPtr;
    pPtr=&p;
    cout<<"\nPrint2 su un Persona* che punta ad un oggetto di tipo Persona:\n";
    pPtr->print2();
    pPtr=&s;
    cout<<"\n\nPrint2 su un Persona* che punta ad un oggetto di tipo Studente:\n";
    pPtr->print2();
    system("PAUSE");
    return EXIT_SUCCESS;
}
