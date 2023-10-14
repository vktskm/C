#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>

class Crypto {
      public:
             Crypto(int n);
             int numero;
             int decriptNum(int n);
      private: 
              int tmp, vett[4];
              bool verificaNum(int n);
              int criptaNum(int n);
              void messErr();
              
      };
