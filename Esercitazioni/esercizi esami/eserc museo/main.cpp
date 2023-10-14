#include <cstdlib>
#include <iostream>

using namespace std;

#include "Museo.h"
#include "Dipinto.h"
#include "Scultura.h"
#include "OperaDarte.h"

int main(int argc, char *argv[])
{
    Museo m;
    Dipinto d1("dip1","aut1","11/12/2000","olio_su_tela",40,50),d2("dip2","aut2","11/1/2000","tempera",40,50);
    Scultura s1("scul1","autScul1","1/2/2003","marmo",1.20),s2("scul2","autScul2","1/7/1999","marmo",2.90);
    cout<<d1<<"\n"<<d2<<"\n"<<s1<<"\n"<<s2<<"\n";
    OperaDarte* el[]={&d1,&d2,&s1,&s2};
    m.aggiornaElenco(el,4);
    cout<<"Invocazione metodo di museo:\n";
    m.printElenco();
    system("PAUSE");
    return EXIT_SUCCESS;
}
