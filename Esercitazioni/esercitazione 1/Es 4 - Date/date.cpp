#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
#include "date.h"

         Date::Date(int g, int m, int a){
                        setGiorno(g);
                        setAnno(a);
                        setMese(m);
                        }
         int Date::verificaMese(int m){
                        if ((m<0)||(m>12))
                           m = 1;
                           return m;
                        }
         void Date::setGiorno(int g){
                             giorno = g;
                             }
         void Date::setMese(int m){
                             mese = verificaMese(m);
                             }
         void Date::setAnno(int a){
                             anno = a;
                             }
         int Date::getGiorno(){
             return giorno;
             }
         int Date::getMese(){
             return mese;
             }
         int Date::getAnno(){
             return anno;
             }
         void Date::displayDate(){
              cout<<"Oggi e' il ";
              if (giorno <10){
                 cout<<"0";
                 }
              cout<<getGiorno()<<"/";
              if (mese <10){
                 cout<<"0";
                 }
              cout<<getMese()<<"/";
              if (anno <10){
                 cout<<"0";
                 }
              cout<<getAnno()<<endl;

              }






