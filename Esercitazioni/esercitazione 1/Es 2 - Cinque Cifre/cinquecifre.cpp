#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>

int main(){
      int numero, stmp;
      cout<<"Inserisci un numero di 5 cifre"<<endl;
      cin>>numero;
      cout<<"Le cifre che lo compongono sono:"<<endl;
      for (int i = 10000; i >=10; i /= 10){
          stmp = numero/i;
          numero %= i;
          cout<<stmp<<"  ";
          }
      cout<<numero<<endl;
      system("PAUSE");
      return 0;
}
