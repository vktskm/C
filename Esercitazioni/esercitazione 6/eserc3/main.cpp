#include <cstdlib>
#include <iostream>

using namespace std;

#include "String.h"
 
int main(int argc, char *argv[])
{   
    String s("ciao"),s1(" mondo"),s2(" bye\n"),s3;
    /*s.print();
    cout<<"\nlunghezza di s = "<<s.len()<<"\n";
      
    s.append(s1).append(s2);
    s.print();
    
    String a("a"),b("ab");
    cout<<a.compare(b);
    */
    
    s3.copy(s2);
    s3.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
