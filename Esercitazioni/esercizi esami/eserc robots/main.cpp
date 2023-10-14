#include <cstdlib>
#include <iostream>

using namespace std;

#include "Arena.h"
#include "Veloci.h"
#include "Corazzati.h"

#include <cstdlib>

extern const int lArena;

int main(int argc, char *argv[])
{
    srand(time(0));
    Corazzati c1(1,rand()%lArena,rand()%lArena),c2(2,rand()%lArena,rand()%lArena);
    Veloci v3(3,rand()%lArena,rand()%lArena),v4(4,rand()%lArena,rand()%lArena);
    Robot* arr[4]={&c1,&c2,&v3,&v4};
    
    Arena a(arr,4);
    
    int vincitore=a.faiAvanzareFinoAllaFine();
    cout<<"il vincitore e' il robot di ID: "<<vincitore;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
