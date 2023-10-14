#ifndef BUNGALOW_H
#define BUNGALOW_H

#include <iostream>
using std::ostream;
using std::istream;

#include "Posto.h"

class Bungalow:public Posto{
      friend ostream& operator<<(ostream& o,const Bungalow& b);
      friend istream& operator>>(istream& i,Bungalow& b);
      public:
             Bungalow(int I=-1,double pr=0,bool occup=false,int postiLet=0, bool bagn=false);
             void setPostiLetto();
             void setBagno();
             virtual void print();
      private:
              int postiLetto;
              bool bagno;
      };
      
ostream& operator<<(ostream& o,const Bungalow& b);
istream& operator>>(istream& i,Bungalow& b);

#endif
