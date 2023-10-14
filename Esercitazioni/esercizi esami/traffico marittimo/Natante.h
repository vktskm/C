#ifndef NATANTE_H
#define NATANTE_H

#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

class Natante{
      friend ostream& operator<<(ostream& o,const Natante& n);
      friend istream& operator>>(istream& i,Natante& n);
      public:
            Natante(int id=0,double px=0,double py=0,double vel=0,double dir=0,double lun=0,double lar=0);
            virtual~Natante();
            void setDirezione(double dir);  
            void Avanza();    
            virtual void Modifica();
            int getID();
            virtual void stampa(); 
            
      private:
              int ID;
              double x,y;
              double velocita;
              double direzione;
              double lunghezza,larghezza;
      };
      
ostream& operator<<(ostream& o,const Natante& n);
istream& operator>>(istream& i,Natante& n);

#endif
