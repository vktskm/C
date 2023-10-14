#ifndef COMPLEX
#define COMPLEX

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

class Complex{
      friend ostream& operator<<(ostream&,Complex&);
      friend istream& operator>>(istream&,Complex&);
      public:
             Complex();
             Complex(double re,double im);
             Complex (double);//<----costruttore di conversione
             Complex &  print();
             Complex& add(const Complex a,const Complex b);
             Complex& sottr(const Complex a,const Complex b);
             Complex& prod(const Complex a,const Complex b);
             Complex operator+(const Complex& b);
             Complex operator-(const Complex& b);
             Complex operator*(const Complex& b);
             bool operator==(const Complex& b);
             bool operator!=(const Complex& b);
             void operator+=(const Complex& b);
             void operator-=(const Complex& b);
             Complex operator~();
             double getRe()const;
             double getIm()const;
      private:
              double re,im;
      };
      
ostream& operator<<(ostream&,Complex&);
istream& operator>>(istream&,Complex&);

#endif
 

