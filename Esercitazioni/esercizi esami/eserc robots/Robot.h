#ifndef ROBOT_H
#define ROBOT_H

#include <cstdlib>

#include <iostream>
using std::cout;

 

class Robot{
      public:
             Robot(int id=0,int px=-1,int py=-1);
             virtual void Avanza()=0;
             bool morto();
             int getID();
             void stampaCoordinate();
      protected:
              int ID;
              double x,y;//posizioni nell'arena
              double velocita;
              double resistenzaAttuale;
              int passo;
              int tempo;
      };

#endif
