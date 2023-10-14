#ifndef CERCHIO_H
#define CERCHIO_H

#include <iostream>
using std::cout;
using std::endl;

#include "Punto.h"

class Cerchio :public Punto{
      public:
             Cerchio(double x=0,double y=0,double rag=0):Punto(x,y)
                                                         {setRaggio(rag);}
             Cerchio(Punto p,double rag=0):Punto(p.getX(),p.getY())
                                           {setRaggio(rag);}
             void setRaggio(double r) 
                                     {raggio=r;}
             double getRaggio()const
                                   {return raggio;}
             void print()const
                              {Punto::print();
                                cout<<"RAGGIO = "<<raggio<<endl;
                                   }
      private:
              double raggio;
      };

#endif
