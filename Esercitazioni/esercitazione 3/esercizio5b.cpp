//versione 2 dell'esercizio numero 5
#include <cstdlib>
#include <iostream>
using  std::cin;
using  std::cout;

char articolo[][10]={"the ","a ","one ","some ","any "};
char nome[][10]={"boy ","girl ","town ","dog ","car "};
char verbo[][10]={"drove ","jumped ","ran ","walked ","skipped "};
char preposizione[][10]={"to ","from ","over ","under "};

void generaFrase(char *[]);

int main(int argc, char *argv[])
{
    srand(time(0));
    int num;
    char *frase[6];
    cout<<"Scrivi il numero di frasi da generare: ";
    cin>>num;
    for(int i=0;i<num;i++){
          generaFrase(frase);
           for(int i=0;i<6;i++)
              cout<<frase[i];   
           cout<<"\n";
          }
    system("PAUSE");
    return EXIT_SUCCESS;
}

void generaFrase(char *frase[]){
     frase[0]=articolo[rand()%5];
     frase[1]=nome[rand()%5];
     frase[2]=verbo[rand()%5];
     frase[3]=preposizione[rand()%5];
     frase[4]=articolo[rand()%5];
     frase[5]=nome[rand()%5];
     }

