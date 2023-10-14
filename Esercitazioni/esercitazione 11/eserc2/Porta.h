#ifndef PORTA_H
#define PORTA_H

class Porta{
      
      public:
             Porta();
             void setI1();
             void resetI1();
             void connectI1(Porta*);
             virtual bool out()=0;
             void interpretaI1(bool &x);
      protected:
              Porta* I1;
      };

#endif
