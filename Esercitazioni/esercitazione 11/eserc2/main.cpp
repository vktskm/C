#include <cstdlib>
#include <iostream>

using namespace std;

#include "Xor.h"

int main(int argc, char *argv[])
{
    Xor n;
    n.setI1();
    n.setI2();
    bool b=n.out();
    cout<<b;
    system("PAUSE");
    return EXIT_SUCCESS;
}
