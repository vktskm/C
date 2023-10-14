#ifndef OPERADARTE_H
#define OPERADARTE_H

#include <string>
using std::string;

#include <iostream>
using std::ostream;
using std::istream;

class OperaDarte{
      friend ostream& operator<<(ostream& o,const OperaDarte& op);
      friend istream& operator>>(istream& i,OperaDarte& op);
      public:
             OperaDarte(string tit="",string autor="",string dataCreaz="");
             virtual void print()=0;
      private:
              string titolo,autore,dataCreazione;
      };

ostream& operator<<(ostream& o,const OperaDarte& op);
istream& operator>>(istream& i,OperaDarte& op);

#endif
