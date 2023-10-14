#ifndef STUDENTE_H
#define STUDENTE_H

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "Persona.h"

class Studente:public Persona{
      friend ostream& operator<<(ostream&,const Studente&);
      public:
             Studente(const string& n="-vuoto-",const string& c="-vuoto-",
                      Date d=(0,0,0),const string& cDL="-vuoto-");
             virtual~Studente();
             void setCorsoDiLaurea(const string&);
             const string& getCorsoDiLaurea()const;
             virtual void print()const;
      private:
              string corsoDiLaurea;
      };
      
ostream& operator<<(ostream&,const Studente&);

#endif
