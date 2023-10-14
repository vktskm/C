#include <cstdlib>
#include <iostream>

using namespace std;
 
#include "Polinomio.h"
#include "Monomio.h"
int main(int argc, char *argv[])
{ 
    //creo il polinomio p1
    Monomio m0(5,2),m1(3,2),m2(1,1),m3(4,1),m4(2,0);
    Monomio vet1[]={m0,m1,m2,m3,m4};
    Polinomio p1(vet1,5);
        
    //creo il polinomio p2
    Monomio M0(1,3),M1(3,3),M2(1,2),M3(1,2),M4(5,2),M6(5,0),M7(8,0);
    Monomio vet2[]={M0,M1,M2,M3,M4,M6,M7};
    Polinomio p2(vet2,7);
    
    cout<<"stampa p1:\n";
    p1.display();
       
    cout<<"\n\nstampa p2:\n";
    p2.display();
    
    cout<<"\n\nEseguo la somma tra p1 e p2:\n";
    Polinomio ris(40);
    ris.somma(p1,p2);
    ris.display();
    
    cout<<"\n\nEseguo la differenza tra p1 e p2:\n";
    ris.differenza(p1,p2);
    ris.display();
   
   
   
   
   
   
    cout<<"\n\nEseguo la moltiplicazione tra p1 e p2:\n";
    ris.moltiplicazione(p1,p2);
    ris.display();
   
    cout<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
