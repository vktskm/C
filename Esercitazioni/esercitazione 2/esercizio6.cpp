#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

void quadratoByRef(int& n);
int quadratoByVal(int n);

main(){
       int n=5,ris=0;
       ris=quadratoByVal(n);
       //quadratoByRef(n);
       cout<<"ris = "<<ris<<"\n";
       cout<<"n = "<<n<<"\n";
       system("pause");
       }

void quadratoByRef(int& n){
     n*=n;
     }
     
int quadratoByVal(int n){
    return n*n;
    }
