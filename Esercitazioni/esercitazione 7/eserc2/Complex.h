#ifndef COMPLEX
#define COMPLEX
class Complex{
      friend Complex add(Complex a,Complex b);
      friend Complex sottr(Complex a,Complex b);
      friend Complex& print(Complex a);
      public:
             Complex();
             Complex(double re,double im);
             Complex &  print();
             void add(const Complex a,const Complex b);
              void sottr(const Complex a,const Complex b);
             double getRe()const;
             double getIm()const;
      private:
              double re,im;
      };
#endif


