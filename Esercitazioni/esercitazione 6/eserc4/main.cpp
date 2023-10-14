//aplico un 'cout ' al costruttore e al distruttore della classe
//Rectangle e verifico tutto nel seguenta programma di prova;
//NOTA: non tutti i distruttori verranno visualizzati poichè
//prima di chiudere il main il programma si ferma all'istruzione 
//system("pause"); in quella riga di codice alcuni oggetti non sono 
//stati anclora distrutti; essi verranno distrutti appena giunti alla
//riga finle del main(quella che chiude il main in cui c'è '}').
//Il messaggio della distruzione di tali oggetti non verrà 
//pertanto visualizzato


#include <cstdlib>
#include <iostream>

using namespace std;
#include "Rectangle.h"
Rectangle rGlobal("rGlobal");

void funz();

int main(int argc, char *argv[])
{
    Rectangle rLocal1("rLocal1");
    static Rectangle rStatic1("rStatic1"); 
    funz();   
    {
         Rectangle rLocal2("rLocal2");
           }
    funz();
    system("PAUSE");
    return EXIT_SUCCESS;
}

void funz(){
     static Rectangle rStatic2("rStatic2");
     Rectangle rLocalFunz("rLocalFunz");
     }
