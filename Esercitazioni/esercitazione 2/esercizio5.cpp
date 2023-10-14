#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

bool gioca();
bool indovinato();

main(){
       srand(time(0));
       bool ok=true;
       while(ok)
          ok=gioca();
       system("pause");
       }
  
  bool gioca(){
       int num=(rand()%1000)+1,ins;
       cout<<"Ho pensato un numero da 1 a 1000.\nProva ad  indovinarlo!\nDigita il tuo primo tentativo: ";
       while(true){
          cin>>ins;
          if(ins==num)
                  return indovinato();
          if (ins>num)
              cout<<"Troppo alto. Riprova.\n";
          if (ins<num)
              cout<<"Troppo basso. Riprova.\n";
         
       }       
       } 
       
       
bool indovinato(){
     char scelta='a';
     cout<<"Bravo! Hai indovinato il numero.";
     while((scelta!='y')&&(scelta!='n')){
     cout<<"\nVuoi giocare ancora?(y/n)";
                              cin>>scelta;
                              if (scelta=='y')
                                   return true;
                              if (scelta=='n')
                                   return false;
                                
               }    
     }
