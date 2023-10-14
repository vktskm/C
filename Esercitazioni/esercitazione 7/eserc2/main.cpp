#include <cstdlib>
#include <iostream>
    
using namespace std;
  

#include "FunzioniEsterne.h"
#include "Complex.h"
int main(int argc, char *argv[])
{
    
    Complex c1(2.4,5.8),c2(2.1,2.1),ris1,ris2;
    cout<<"Verifica di ris1.add(c1,c2):\n";
    ris1.add(c1,c2);
    ris1.print();//uso di print come membro
     
    cout<<"\nVerifica di ris2=add(c1,c2)\n";
    ris2=add(c1,c2);
    print(ris2);//uso di print come funzione esterna
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
