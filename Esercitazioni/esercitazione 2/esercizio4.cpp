#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

bool perfect(int);
void stampaFattoriDi(int);

main(){
       int max;
       cout<<"Scrivi il numero massimo fino al quale devo calcolare i numeri perfetti: ";
       cin>>max;
       for(int i=1;i<=max;i++){
               if (perfect(i)){
                   cout<<i<<" = 1";
                   stampaFattoriDi(i);
                   cout<<"\n";
                   }
               }
       system("pause");
       }
       

void stampaFattoriDi(int n){
     for(int i=2;i<=n/2;i++){
         if(!(n%i))
            cout<<" + "<<i;
            }
      }      


bool perfect(int n){
     int somma=0;
     for(int i=1;i<=n/2;i++)
             if(!(n%i))
             somma+=i;
     if (somma==n) 
         return true;
     else 
         return false;
     }
