#include <iostream>
using std::cout;

#include "Rectangle.h"
#include <string>
using std::string;

Rectangle::Rectangle(string n):length(1),width(1),nome(n){
            cout<<"Costruzione dell'oggetto: "<<nome<<"\n";
            }
Rectangle::Rectangle(double l,double w,string n):nome(n){
            setLength(l).setWidth(w);
            cout<<"Costruzione dell'oggetto: "<<nome<<"\n";
            }
Rectangle::~Rectangle(){
             cout<<"Distruzione dell'oggetto: "<<nome<<"\n";
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
double Rectangle::getLength(){
       return this->length;
       }
double Rectangle::getWidth(){
       return this->width;
       }
Rectangle& Rectangle::print(){
     cout<<"lunghezza = "<<getLength()<<"\nlarghezza = "<<getWidth()<<"\n";
     return *this;
     }
double Rectangle::getArea(){
       return Rectangle::length*Rectangle::width;
       }
double Rectangle::getPerimetro(){
       return Rectangle::length+Rectangle::width;
       }
