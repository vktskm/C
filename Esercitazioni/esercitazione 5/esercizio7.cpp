#include <cstdlib>
#include <iostream>
using  std::cin;
using  std::cout;

#include <cstring>

char articolo[][10]={"the ","a ","one ","some ","any "};
char nome[][10]={"boy ","girl ","town ","dog ","car "};
char verbo[][10]={"drove ","jumped ","ran ","walked ","skipped "};
char preposizione[][10]={"to ","from ","over ","under "};

void generaFrase(char* const frase);

int main(int argc, char *argv[])
{
    srand(time(0));
    int num;
    char frase[30];
    cout<<"Scrivi il numero di frasi da generare: ";
    cin>>num;
    for(int i=0;i<num;i++){
          generaFrase(frase);
               cout<<frase;   
           cout<<"\n";
          }
    system("PAUSE");
    return EXIT_SUCCESS;
}

void generaFrase(char* const frase){
     strcpy(frase,articolo[rand()%5]);
     strcat(frase,nome[rand()%5]);
     strcat(frase,verbo[rand()%5]);
     strcat(frase,preposizione[rand()%5]);
     strcat(frase,articolo[rand()%5]);
     strcat(frase,nome[rand()%5]);
     }

