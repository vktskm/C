#include <cstdlib>
#include <iostream>
using  std::cin;
using  std::cout;
using  std::endl;


int main(int argc, char *argv[])
{
    long value1=200000,value2;
    
    //a
    long *lPtr=0;
    
    //b
    lPtr=&value1;
    
    //c
    cout<<*lPtr<<endl;
    
    //d
    value2=*lPtr;
    
    //e
    cout<<value2<<endl;
    
    //f
    cout<<&value1<<endl;
    
    //g
    cout<<lPtr<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


