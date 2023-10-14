#ifndef STUDENTE_H
#define STUDENTE_H

#include "Persona.h"

class Studente:public Persona{
      public:
             Studente();
             Studente(string ,string , string ,const long,const string&);
             ~Studente();
             Studente& setMatr(long);
             Studente& setCDL(const string&);
             long getMatr()const;
             string getCDL()const;
             void print()const;
             virtual void print2()const;
             
      private:
              long matricola;
              string corsoDiLaurea;
      };

#endif
