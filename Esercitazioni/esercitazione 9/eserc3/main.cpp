#include <cstdlib>
#include <iostream>

using namespace std;

#include "Cilindro.h"

int main(int argc, char *argv[])
{      
    Cilindro a(3,67);  
    a.print();  
    system("PAUSE");
    return EXIT_SUCCESS;
}
/*
schema seguito:
       
                           
               |------------->Triangolo
               |
               |
               |                     |-------------------->CilindroEllittico----->Cilindro
               |                     |
               |                     |
Shape-->TwoDimensionalShape--->ThreeDimensionalShape------>Parallelepipedo------->Cubo
               |
               |
               |------------->Ellisse------------------->Circonferenza
               |                 
               |
               |
               |------------->Quadrilatero--------------->Rettangolo---------->Quadrato
                                 |
                                 |
                                 |------------------------>Trapezio
               
               
               
*/
