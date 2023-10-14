#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
#include "date.h"

int main (){
    int gg,mm,aa;
    cout<<"Inserisci giorno, mese e anno corrente separati da spazio:"<<endl;
    cin>> gg >> mm >> aa;
    cout<<endl;
    Date d(gg,mm,aa);
    d.displayDate();
    system("PAUSE");
    }
