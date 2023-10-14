#include <cstdlib>
#include <iostream>

using namespace std;

#include "orario.h"

int main(int argc, char *argv[])
{
    /*Orario o1(23,0,0);
    o1.secDaOre12();
    Orario o2(1,0,0);
    o1.secDaOre12();
    Orario o3=o1.diff(o2);
    o3.display();
    */
    Orario o1(23);
    o1.display();
    system("PAUSE");
    return EXIT_SUCCESS;
}
