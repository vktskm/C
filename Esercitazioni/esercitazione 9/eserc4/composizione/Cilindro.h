#ifndef CILINDRO_H
#define CILINDRO_H

#include <iostream>
using std::cout;
using std::endl;

#include "Cerchio.h"


class Cilindro{
      public:
             Cilindro(double x=0,double y=0,double rag=0,double h=0):cerc(x,y,rag)
                                          {setAltezza(h);}
             Cilindro(Punto p,double rag=0,double h=0):
                                            cerc(p.getX(),p.getY(),rag)
                                            {setAltezza(h);}
             Cilindro(Cerchio c,double h=0):
                                             cerc(c)
                                             {setAltezza(h);}                           
             void setAltezza(double r) 
                                 {altezza=r;}
             double getAltezza()const
                                 {return altezza;}
                                 
              void setCerchio(Cerchio c) 
                                 {cerc=c;}
             Cerchio getCerchio()const
                                 {return cerc;}
            
             void print()const
                         {cerc.print();
                          cout<<"ALTEZZA = "<<altezza<<endl;
                          }
      private:
              Cerchio cerc;
              double altezza;
      };

#endif
