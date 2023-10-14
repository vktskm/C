#ifndef DOCENTE_H
#define DOCENTE_H

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::ostream;

#include "Persona.h"

class Docente: public Persona{
      friend ostream& operator<<(ostream&,const Docente&);
      public:
             Docente(const string& n="-vuoto-",const string& c="-vuoto-",Date d=(0,0,0),const string& ins="-vuoto-");
             virtual~Docente();
             const string& getInsegnamento()const;
             void setInsegnamento(const string& ins);
             virtual void print()const;
      private:
              string insegnamento;
      };

ostream& operator<<(ostream&,const Docente&);


#endif
