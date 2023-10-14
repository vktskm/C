#ifndef POSTO_H
#define POSTO_H

#include <iostream>
using std::ostream;
using std::istream;

class Posto{
      friend ostream& operator<<(ostream& o,const Posto& p);
      friend istream& operator>>(istream& i,Posto& p);


      public:
             Posto(int I=-1,double pr=0,bool occup=false);
             int getID()const;
             void setID();
             double getPrezzo()const;
             void setPrezzo();
             bool getOccupaz();
             virtual void print();
             void modificaOccupaz(bool b);
             
      private:
              int ID;
              double prezzo;
              bool occupazione;
      };

ostream& operator<<(ostream& o,const Posto& p);
istream& operator>>(istream& i,Posto& p);

#endif
