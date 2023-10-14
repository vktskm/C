#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{
      public:
             Persona();
             Persona(string n,string c, string cf);
             ~Persona();
             Persona& setNome(const string&);
             Persona& setCognome(const string&);
             Persona& setCodiceFiscale(const string&);
             string getNome()const;
             string getCognome()const;
             string getCodiceFiscale()const;
             void print()const;
             virtual void print2()const;
                          
      private:
              string nome,cognome,codiceFiscale;
      };


#endif
