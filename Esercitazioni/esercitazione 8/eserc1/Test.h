#include <iostream>
using std::cout;
using std::endl;


class Test{
      public:
             Test(int i=0){
                         ID = i;
                         cout<<"Costruttore: "<<ID<<endl;
                         }
             ~Test(){
                     cout<<"Distruttore: "<<ID<<endl;
                     }
      private:
             int ID;
      };
