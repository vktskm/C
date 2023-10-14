//versione 1 dell'esercizio numero 5
#include <cstdlib>
#include <iostream>
using  std::cin;
using  std::cout;

char articolo[][10]={"the ","a ","one ","some ","any "};
char nome[][10]={"boy ","girl ","town ","dog ","car "};
char verbo[][10]={"drove ","jumped ","ran ","walked ","skipped "};
char preposizione[][10]={"to ","from ","over ","under "};

void stampaFrase();

int main(int argc, char *argv[])
{
    srand(time(0));
    int num;
    cout<<"Scrivi il numero di frasi da generare: ";
    cin>>num;
    for(int i=0;i<num;i++){
          stampaFrase();
          cout<<"\n";
          }
    system("PAUSE");
    return EXIT_SUCCESS;
}

void stampaFrase(){
     cout<<articolo[rand()%5]<<nome[rand()%5]<<verbo[rand()%5]<<preposizione[rand()%5]<<articolo[rand()%5]<<nome[rand()%5];
     }

