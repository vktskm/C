#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

#include "Date.h"

class Persona{
      friend ostream& operator<<(ostream&,const Persona&);
      public:
             Persona(const string& n="-vuoto-",const string& c="-vuoto-",Date d=(0,0,0));
             virtual~Persona();
             const string& getNome()const;
             const string& getCognome()const;
             const Date& getDataDiNascita()const;
             Persona& setNome(const string& n);
             Persona& setCognome(const string& n);
             Persona& setDataDiNascita(const Date& d);
             
             //stampa solo il nome e il cognome
             virtual void print()const;
      private:
              string nome,cognome;
              Date dataDiNascita;      
      };

//stampa tutte le informazioni
ostream& operator<<(ostream&,const Persona&);

#endif
