
     
#include <iostream>
using std::cout;

#include "Complex.h"

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

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



Complex& Complex::add(const Complex a,const Complex b){
        re=a.getRe()+b.getRe();
        im=a.getIm()+b.getIm();
        return *this;
        }

Complex& Complex::sottr(const Complex a,const Complex b){
        re=a.getRe()-b.getRe();
        im=a.getIm()-b.getIm();
        return *this;
        }

Complex& Complex::prod(const Complex a,const Complex b){
        re=a.getRe()*b.getRe()-a.getIm()*b.getIm();
        im=a.getIm()*b.getRe()+a.getRe()*b.getIm();
        return *this;
        }

Complex Complex::operator+(const Complex& b){
        Complex ris;
        ris.add(*this,b);
        return ris;
        }
 
Complex Complex::operator-(const Complex& b){
        Complex ris;
        ris.sottr(*this,b);
        return ris;
        }

Complex Complex::operator*(const Complex& b){
        Complex ris;
        ris.prod(*this,b);
        return ris;
        }

bool Complex::operator==(const Complex& b){
      if((re==b.re)&&(im==b.im))
        return true;
      return false;
      }
 
 
bool Complex::operator!=(const Complex& b){
     return !operator==(b);
     }

Complex Complex::operator~(){
        Complex ris(re,-im);
        return ris;
        }
        
void Complex::operator+=(const Complex& b){
     re+=b.re;
     im+=b.im;
     }
     
void Complex::operator-=(const Complex& b){
     re-=b.re;
     im-=b.im;
     }

ostream& operator<<(ostream& out,Complex& c){
         out<<"("<<c.re<<", "<<c.im<<")";
         return out;
         }

istream& operator>>(istream& in,Complex& c){
         in>>c.re;
         in>>c.im;
         return in;
         }

//implemento il costruttore di conversione         
Complex::Complex(double d){
         re=d;
         im=0;
         }
