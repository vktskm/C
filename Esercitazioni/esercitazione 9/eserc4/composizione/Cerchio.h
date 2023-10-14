#ifndef CERCHIO_H
#define CERCHIO_H

#include <iostream>
using std::cout;
using std::endl;

#include "Punto.h"

class Cerchio{
      public:
             Cerchio(double x=0,double y=0,double rag=0):pnt(x,y)
                                                         {setRaggio(rag);}
             Cerchio(Punto p,double rag=0):pnt(p.getX(),p.getY())
                                           {setRaggio(rag);}
             void setRaggio(double r) 
                                     {raggio=r;}
             double getRaggio()const
                                   {return raggio;}
             void setPunto(Punto p) 
                                     {pnt=p;}
             Punto getPunto()const
                                   {return pnt;}                      
             
             void print()const
                              {pnt.print();
                                cout<<"RAGGIO = "<<raggio<<endl;
                                   }
      private:
              Punto pnt;
              double raggio;
      };

#endif
