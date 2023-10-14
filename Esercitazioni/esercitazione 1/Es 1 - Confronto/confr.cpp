#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>

int main(){
      int a, b, c, sum, prod, pic, gran;
      double med;
      cout<<"Immetti tre interi positivi diversi: ";
      cin >> a >> b >> c;
      sum = a+b+c;
      cout<<"La loro somma e' "<<sum<<endl;
      med = (a+b+c)/3.0;
      cout<<"La media e' "<<med<<endl;
      prod = a*b*c;
      cout<<"Il prodotto e' "<<prod<<endl;
      pic = a; gran = a;
      if(gran<b){
              gran = b;
              }else pic = b;
      if(gran<c){
              gran = c;
              }else if(pic>c){
                    pic = c;
                    }
      cout<<"Il piu' piccolo e' "<<pic<<endl<<"Il piu' grande e' "<<gran<<endl;
      system("PAUSE");
      return 0;
}
