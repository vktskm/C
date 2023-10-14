#include<cstdlib>
#include <iostream>
using std::cout;
using std::cin;

bool even(int);

main(){
       int d;
       while(true){
                   cout<<"Inserisci un numero (9999 per uscire): ";
                   cin>>d;
                   if(d==9999) break;
                   switch (even(d)){
                        case true:cout<<"e' pari\n";break;
                        case false:cout<<"e' dispari\n";
                        }
                   }
       system("pause");
       }

bool even(int d){
     return !(d%2);
     }
