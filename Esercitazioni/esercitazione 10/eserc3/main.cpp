#include <cstdlib>
#include <iostream>

using namespace std;

#include "StudenteSpecialista.h"

#include "Studente.h"

#include "Esame.h"

int main(int argc, char *argv[])

{
    Date d1(4,10,1985),
         d2(17,2,1986),
         d3(23,11,1986),
         d4(1,1,1981),
         d5(6,7,1970),
         d6(4,3,2007);
    Studente s1("Mario","Bianchi",d1,"Ingengeria Informatica"),
             s2("Marco","Rossi",d2,"Ingengeria Informatica"),
             s3("Alessandro","Verdi",d3,"Ingengeria Informatica");
    StudenteSpecialista sp("Riccardo","Bianchi",d4,"Ingegneria Informatica","Ingegneria Nucleare");
    Docente doc("Luigi","Mangiapane",d5,"Analisi Matematica");
    Esame es("Analisi Matematica",d6,doc);
    es.iscriviStudente(s1).iscriviStudente(s2).iscriviStudente(s3).iscriviStudenteSpecialista(sp);
    es.print();
    
    cout<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

