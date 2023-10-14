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
      private:
             string nome;
      };

#endif
