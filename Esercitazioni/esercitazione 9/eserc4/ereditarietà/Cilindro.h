#ifndef CILINDRO_H
#define CILINDRO_H

#include <iostream>
using std::cout;
using std::endl;

#include "Cerchio.h"
#include "Punto.h"

class Cilindro :public Cerchio{
      public:
             Cilindro(double x=0,double y=0,double rag=0,double h=0):Cerchio(x,y,rag)
                                          {setAltezza(h);}
             Cilindro(Punto p,double rag=0,double h=0):
                                            Cerchio(p.getX(),p.getY(),rag)
                                            {setAltezza(h);}
             Cilindro(Cerchio c,double h=0):
                                             Cerchio(c.getX(),c.getY(),c.getRaggio())
                                             {setAltezza(h);}                           
             void setAltezza(double r) 
                                 {altezza=r;}
             double getAltezza()const
                                 {return altezza;}
            
             void print()const
                         {Cerchio::print();
                          cout<<"ALTEZZA = "<<altezza<<endl;
                          }
      private:
              double altezza;
      };

#endif
