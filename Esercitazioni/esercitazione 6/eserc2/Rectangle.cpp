#include <iostream>
using std::cout;

#include "Rectangle.h"
Rectangle::Rectangle():length(1),width(1){
            ;
            }
Rectangle::Rectangle(double l,double w){
            setLength(l).setWidth(w);
            }
Rectangle& Rectangle::setLength(const double l){
       if((l>=0)&&(l<=20))
         Rectangle::length=l;
       else
         cout<<"Valore non valido\n";
       return *this;
       }
Rectangle& Rectangle::setWidth(const double w){
        if((w>=0)&&(w<=20))
         Rectangle::width=w;
       else
         cout<<"Valore non valido\n";
       return *this;
       }
double Rectangle::getLength()const{
       return this->length;
       }
double Rectangle::getWidth()const{
       return this->width;
       }
Rectangle& Rectangle::print(){
     cout<<"lunghezza = "<<getLength()<<"\nlarghezza = "<<getWidth()<<"\n";
     return *this;
     }
double Rectangle::getArea()const{
       return Rectangle::length*Rectangle::width;
       }
double Rectangle::getPerimetro()const{
       return Rectangle::length+Rectangle::width;
       }
