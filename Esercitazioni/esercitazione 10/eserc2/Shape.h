#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{
      public:
             Shape(const string& n="no name");
             void setNome(const string& n);
             string getNome()const;
             void print()const;
             virtual void draw()const=0;
             virtual void interagisciUtente()=0;

      private:
             string nome;
      };
 
#endif
