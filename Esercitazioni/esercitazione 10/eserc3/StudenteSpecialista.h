#ifndef STUDENTESPECIALISTA_H
#define STUDENTESPECIALISTA_H

#include "Studente.h"

#include <string>
using std::string;


class StudenteSpecialista:public Studente{
      friend ostream& operator<<(ostream&,const StudenteSpecialista&);

      public:
             StudenteSpecialista(const string& n="-vuoto-",const string& c="-vuoto-",
                      Date d=(0,0,0),const string& cDL="-vuoto-",
                      const string& laureaTr="-vuoto-");
             ~StudenteSpecialista();
             void setLaureaTriennaleInPossesso(const string&);
             const string& getLaureaTriennaleInPossesso()const;
             virtual void print()const;
      private:
              string laureaTriennaleInPossesso;
      };

ostream& operator<<(ostream&,const StudenteSpecialista&);

#endif
