#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
using std::cout;
using std::endl;

class Punto{
      public:
             Punto(double xp=0,double yp=0)
                                          {x=xp; y=yp;}
             void setX(double xp) 
                                 {x=xp;}
             double getX()const
                                 {return x;}
             void setY(double yp)
                               {y=yp;}
             double getY()const
                                {return y;}
             void print()const
                         {cout<<"x = "<<getX()<<endl;
                          cout<<"y = "<<getY()<<endl;
                          }
      private:
              double x,y;
      };

#endif
