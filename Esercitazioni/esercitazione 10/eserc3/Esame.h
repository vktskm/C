#ifndef ESAME_H
#define ESAME_H

#include <string>
using std::string;

#include "Date.h"

#include "Docente.h"

#include "Studente.h"

#include "StudenteSpecialista.h"

class Esame{
      public:
             Esame(const string& nomeIns="-vuoto-",Date dEsame=(0,0,0),
                   Docente doc=("-vuoto-","-vuoto-",(0,0,0),"-vuoto-"));
             virtual ~Esame();
             
             //vari set e get
             void setNomeInsegnamentoEsame(const string& n);
             const string& getNomeInsegnamentoEsame()const;
             void setDataEsame(const Date& d);
             const Date& getDataEsame()const;
             void setDocente(const Docente& d);
             const Docente& getDocente()const;
             
             //iscrizione
             Esame& iscriviStudente(const Studente& s);
             Esame& iscriviStudenteSpecialista(const Studente& s);
             
             //visualizzazione di tutti i dati dell'esame
             void print()const;
      private:
              string nomeInsegnamentoEsame;
              Date dataEsame;
              Docente docenteEsame;
              Studente* elencoIscritti[200];
              int dim; 
      };

#endif
