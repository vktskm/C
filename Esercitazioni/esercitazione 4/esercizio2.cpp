#include <iostream>
using std::cout;

#include <cstdlib>

void f(int []);

main(){
       cout<<"TIPO            BYTES\n";
       cout<<"bool             "<<sizeof(bool)<<"\n";       
       
       cout<<"char             "<<sizeof(char)<<"\n";
       cout<<"short            "<<sizeof(short)<<"\n";
       cout<<"int              "<<sizeof(int)<<"\n";
       cout<<"long             "<<sizeof(long)<<"\n";
       
       cout<<"float            "<<sizeof(float)<<"\n";
       cout<<"double           "<<sizeof(double)<<"\n";
       
       cout<<"long double      "<<sizeof(long double)<<"\n";
       
       cout<<"int*             "<<sizeof(int*)<<"\n";
       
       int v[10];
       cout<<"\nsizeof(v) = "<<sizeof(v)<<"\n";
       int *vPtr;
       cout<<"\nsizeof(vPtr) = "<<sizeof(vPtr)<<"\n";
       
       f(v);
       
       system("pause");
       }

void f(int v[]){
     cout<<"\nsizeof dentro la funzione = "<<sizeof(v)<<"\n";
     }
