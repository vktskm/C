#include <iostream>
using std::cout;

#include<cstdlib>

template <class T>
T min(T a,T b){
    if(a<=b)
    return a;
    else return b;
    }

main(){
      
       cout<<min(3,5)<<"\n";
       system("pause");
       }
