#include <cstdlib>
#include <iostream>

using namespace std;

#include "Complex.h"
int main(int argc, char *argv[])
{ 
    const Complex c1(3.1,4.3); 
    const Complex c2(8,9);
    Complex c3=c1.add(c2);
    c3.print();
    //c3=c1.sottr(c2);
    //c3.print();
    system("PAUSE");
    return 0;
}
