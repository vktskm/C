#include <cstdlib>
#include <iostream>

using namespace std;

#include "Cerchio.h"
#include "Punto.h"
#include "Cilindro.h"

int main(int argc, char *argv[])
{ 
    Punto p(2,2);
    Cerchio c(p,5);
    Cilindro cil(c,9);
    cil.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
