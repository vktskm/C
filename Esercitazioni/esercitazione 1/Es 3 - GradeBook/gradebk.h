#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using std::getline;
#include <cstdlib>
#include <string>
using std::string;

class Registro {
      public:
             Registro();
             Registro(string n, string m);
             void setNomeCorso(string n);
             string getNomeCorso();
             void display();
             void setNomeDocente(string m);
             string getNomeDocente();
      private:
              string NomeCorso;
              string NomeDocente;
};
