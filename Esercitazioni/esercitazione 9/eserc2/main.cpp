#include <cstdlib>
#include <iostream>

using namespace std;

#include "Studente.h"

int main(int argc, char *argv[])
{
    Studente s("Mario","Rossi","233ddfgh46b",456789,"Ingegneria Informatica");
    cout<<"\n\nStampa studente:\n";
    s.print();
    s.setMatr(1111111111).setNome("Giovanni");
    
    s.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
