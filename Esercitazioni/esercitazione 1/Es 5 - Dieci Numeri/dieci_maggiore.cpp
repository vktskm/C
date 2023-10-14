#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>

int main (){
    int val, tmp, i = 9;
    cout<<"Questo programma determina il maggiore tra 10 numeri inseriti dall'utente.\nInserire un numero alla volta e premere 'Invio' a seguito di ogni singola digitazione:"<<endl;
    cin>>val;
    while (i){
          cin>>tmp;
          if (tmp>val){
                       val=tmp;
                       }
          i--;
          }
    cout<<"Il maggiore tra i numeri digitati e' "<<val<<endl;
    system("PAUSE");
}
