
     
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
Complex& Complex::print(){
                  cout<<"("<<Complex::re<<", "<<Complex::im<<")\n";
                  return *this;
                  }
double Complex::getRe()const{
       return Complex::re;
       }

double Complex::getIm()const{
       return Complex::im;
       }



void Complex::add(const Complex a,const Complex b){
        re=a.getRe()+b.getRe();
        im=a.getIm()+b.getIm();
        }

void Complex::sottr(const Complex a,const Complex b){
        re=a.getRe()-b.getRe();
        im=a.getIm()-b.getIm();
        }
/*Complex Complex::add(const Complex a,const Complex b){
        Complex ris(a.getRe()+b.getRe(),a.getIm()+b.getIm());
        return ris;
        }
*/


