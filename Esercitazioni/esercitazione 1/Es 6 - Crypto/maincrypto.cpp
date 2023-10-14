#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "crypto.h"
#include <string>

int main(){
    int innumber, outnumber, decriptn;
    cout<<"Inserici numero da crittografare (max 4 cifre):"<<endl;
    cin>>innumber;
    Crypto cn(innumber);
    outnumber = cn.numero;
    if (outnumber == -1){
                  cout<<"Impossibile crittografare il numero. Numero negativo o con piu' di 4 cifre."<<endl;
                  }
    else{
         cout<<"Il numero "<<innumber<<" criptato e' "<<outnumber<<endl;
         decriptn = cn.decriptNum(outnumber);
         cout<<"Il numero originario era "<<decriptn<<endl; 
         }
    
    system("PAUSE");
    return 0;
}
