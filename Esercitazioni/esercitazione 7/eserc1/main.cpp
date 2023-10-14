#include <cstdlib>
#include <iostream>
 
using namespace std;

#include "IntegerSet.h" 
 
int main(int argc, char *argv[])
{ 
    int elem1[]={12,23,11};
    int elem2[]={12,27,34, 49};
    IntegerSet ins1(elem1,3),ins2(elem2,6),vuoto;
    
    cout<<"Stampa degli elementi di 'vuoto':\n"; 
    vuoto.display(); 
    
    cout<<"\n\nStampa degli elementi di ins1:\n"; 
    ins1.display(); 
     
    cout<<"\n\nStampa degli elementi di ins2:\n"; 
    ins2.display(); 
   
    cout<<"\n\nUnione:\n";
    IntegerSet ris;
    ris=ins1.unionOfIntegerSet(ins2);
    ris.display();
    ris.toVoid();
     
    cout<<"\n\nIntersezione:\n";
    ris=ins1.intersectionOfIntegerSet(ins2);
    ris.display();
    ris.toVoid();  
    
    IntegerSet ins3(elem1,3); 
    cout<<"\n\nStampa degli elementi di ins3:\n"; 
    ins3.display(); 
     
    cout<<"\n\nVerifico se ins3 e ins2 sono uguali\n";
    cout<<ins3.isEqualTo(ins2);
    
    cout<<"\n\nVerifico se ins3 e ins1 sono uguali\n";
    cout<<ins3.isEqualTo(ins1)<<"\n";
    
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
