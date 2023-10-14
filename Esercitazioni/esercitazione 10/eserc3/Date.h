#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::cout;
using std::ostream;

class Date{
      friend ostream& operator<<(ostream&,const Date&);
      public:
             Date(int g=0,int m=0,int a=0);
             virtual~Date();
             Date& setGiorno(int g);
             Date& setMese(int m);
             Date& setAnno(int g);
             int getGiorno()const;
             int getMese()const;
             int getAnno()const;
             void print()const;
      private:
              int giorno,mese,anno;
      };
      
ostream& operator<<(ostream&,const Date&);

#endif
