#include <cstdlib>
#include <iostream>

using namespace std;

#include "Rectangle.h"
int main(int argc, char *argv[])
{
    Rectangle r;
    const Rectangle r2(3,4);
    r.print();
    cout<<"Area r2 = "<<r2.getArea()<<"\nPerimetro r2 = "<<r2.getPerimetro()<<"\n";
    cout<<"Area r = "<<r.getArea()<<"\nPerimetro r = "<<r.getPerimetro()<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
