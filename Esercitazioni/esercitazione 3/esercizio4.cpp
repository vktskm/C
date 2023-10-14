#include <cstdlib>
#include <iostream>
using  std::cin;
using  std::cout;

void stampa(int []);
int lancioDado();

int main(int argc, char *argv[])
{
    srand(time(0));
    int numLanci;
    cout<<"Scrivi il numero dei lanci da effettuare: ";
    cin>>numLanci;
    int valori[12]={0};
    for(int i=0;i<numLanci;i++){
            valori[lancioDado()+lancioDado()-1]++;
            }
    stampa(valori);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void stampa(int valori[]){
     cout<<"Valore          Frequenza\n";
     for(int i=0;i<12;i++)
          cout<<i+1<<"               "<<valori[i]<<"\n";
     }   

int lancioDado(){
        return rand()%6+1;
             }
