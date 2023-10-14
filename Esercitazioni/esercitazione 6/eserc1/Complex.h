class Complex{
      public: 
             Complex();
             Complex(double re,double im);
             const Complex&  print()const;
             Complex add(const Complex a)const;
             Complex sottr(const Complex a)const;
             double getRe()const;
             double getIm()const;
      private:
              double re,im;
      };
 
