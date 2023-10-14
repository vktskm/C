#include <iostream>
using std::cout;

#include "FunzioniEsterne.h"
#include "Complex.h"    
Complex add(Complex a,Complex b){
        Complex ris(a.re+b.re,a.im+b.im);
        return ris;
        } 

Complex sottr(Complex a,Complex b){
        Complex ris(a.re-b.re,a.im-b.im);
        return ris;
        } 

Complex& print(Complex a){
         cout<<"("<<a.re<<", "<<a.im<<")\n";
                  return a;
         }
