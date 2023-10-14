#ifndef SCULTURA_H
#define SCULTURA_H

#include <iostream>
using std::ostream;
using std::istream;

#include "OperaDarte.h"

class Scultura :public OperaDarte{
      friend ostream& operator<<(ostream& o,const Scultura& op);
      friend istream& operator>>(istream& i,Scultura& op);
      public:
             Scultura(string tit="",string autor="",string dataCreaz="",string mat="",double alt=0);
             virtual void print();
      private:
              string materiale;
              double altezza;
             };

ostream& operator<<(ostream& o,const Scultura& op);
istream& operator>>(istream& i,Scultura& op);

#endif
