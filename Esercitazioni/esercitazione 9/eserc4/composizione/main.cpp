#include <cstdlib>
#include <iostream>

using namespace std;

#include "Cerchio.h"
#include "Punto.h"
#include "Cilindro.h"

int main(int argc, char *argv[])
{
    Cerchio c(2,2,5);
    c.print();
    cout<<"\n";
    
    Punto p(3,3);
    c.setPunto(p);
    c.print();
    cout<<"\n";
    
    Cilindro cil(c,34);
    cil.print();
    cout<<"\n";
    
    c.setRaggio(555);
    cil.setCerchio(c);
    cil.print();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
