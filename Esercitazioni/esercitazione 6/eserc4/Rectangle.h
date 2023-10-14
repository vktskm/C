#ifndef RECTANGLE
#define RECTANGLE

#include <string>
using std::string;

class Rectangle{
      public:
         Rectangle(string n);
         Rectangle(double l,double w,string n);
         ~Rectangle();
         Rectangle& setLength(const double l);
         Rectangle& setWidth(const double w);
         double getLength();
         double getWidth();
         Rectangle& print();
         double getArea();
         double getPerimetro();
      private: 
         string nome;      
         double length,width;
      };
#endif
