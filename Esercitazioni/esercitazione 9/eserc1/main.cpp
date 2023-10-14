#include <cstdlib>
#include <iostream>

using namespace std;
#include "Complex.h"

int main(int argc, char *argv[])
{
    //provo ad usare l'operatore + che vuole un complex come argomento
    Complex c(2,3);
    Complex ris=c+2;
    ris.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
