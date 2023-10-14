#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

#include <iostream>
using std::ostream;
using std::istream;

class Persona{
      friend ostream& operator<<(ostream& o,const Persona& p);
      friend istream& operator>>(istream& i,Persona& p);

      public:
             Persona(string n="-vuoto-",string c="-vuoto-",string d="-vuoto-");
      private:
              string nome,cognome,dataDiNascita;
      };

ostream& operator<<(ostream& o,const Persona& p);
istream& operator>>(istream& i,Persona& p);

#endif
