#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using std::getline;
#include <cstdlib>
#include <string>
using std::string;
#include "gradebk.h"

int main(){

    string ins, doc;
    cout<<"Inserisci il nome dell'insegnamento:\n";
    getline(cin, ins);
    cout<<endl<<"Inserisci il nome del docente:\n";
    getline(cin, doc);
    cout<<endl;
    Registro r(ins,doc);
    //r.setNomeCorso(ins);
    r.display();
    return 0;
}
