#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>

class Date {
      private:
              int giorno, mese, anno;
              int verificaMese(int m);
      public:
             Date(int g, int m, int a);
             void setGiorno(int g);
             void setMese(int m);
             void setAnno(int a);
             int getGiorno();
             int getMese();
             int getAnno();
             void displayDate();
      };

