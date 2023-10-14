#include <cstdlib>
#include <iostream>

using namespace std;

#include "Complex.h"

int main(int argc, char *argv[])
{ 
    Complex a(1.0,2.5), b(-2.2, 1.5),c;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    
    c=a+b; cout<<"c: "<<c<<endl;
    c-=b;  cout<<"c: "<<c<<endl;
    c=c-b; cout<<"c: "<<c<<endl;
    c+=b;  cout<<"c: "<<c<<endl;
    c=a*b; cout<<"c: "<<c<<endl;
    
    if(c==a)
      c=~a;
    cout<<"c: "<<c<<endl;    
    
    if(c!=a)
      c=~b;
    cout<<"c: "<<c<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
