#ifndef CIRCONFERENZA_H
#define CIRCONFERENZA_H

#include "Ellisse.h"

class Circonferenza :public Ellisse{
      public:
             //la circonferenza può essere considerata come un'ellisse
             //con le due dimensioni uguali
             Circonferenza(double diam=0,const string& n="Circonferenza");
             void setDiametro(double d);
             double getDiametro()const;
             void print()const;
      private:
             };

#endif
