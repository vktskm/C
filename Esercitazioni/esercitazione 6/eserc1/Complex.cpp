#ifndef COMPLEX
#define COMPLEX

#include <iostream>
using std::cout;

#include "Complex.h"
Complex::Complex(){
                   Complex::re=Complex::im=0;
                   }
Complex::Complex(double re,double im){
           Complex::re=re;
           Complex::im=im;
               } 
const Complex& Complex::print()const{
                  cout<<"("<<Complex::re<<", "<<Complex::im<<")\n";
                  return *this;
                  }
double Complex::getRe()const{
       return Complex::re;
       }

double Complex::getIm()const{
       return Complex::im;
       }
Complex Complex::add(const Complex a)const{
        Complex ris(a.getRe()+Complex::getRe(),a.getIm()+Complex::getIm());
        return ris;
        }
Complex Complex::sottr(const Complex a)const{
        Complex ris(Complex::getRe()-a.getRe(),Complex::getIm()-a.getIm());
        return ris;
        }
#endif
