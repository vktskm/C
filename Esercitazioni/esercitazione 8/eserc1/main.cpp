#include <cstdlib>
#include <iostream>

using namespace std;

#include "Test.h"
void funz();
Test* funz2();

Test global3(3);


int main(int argc, char *argv[])
{
    Test local1(1);
    funz();
    {
         Test local2(2);
         }
    funz();
    funz2();
    cout<<"Prova: costruzione array dinamico di oggetti Test:\n";
    {
                  cout<<"Costruzione dell'array dentro un blocco:\n";
                  Test* arr=new Test[5];
                  cout<<"Uscita dal blocco...\n";
                  //delete [] arr;
                  } 
    cout<<"Uscito!\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}


void funz(){
     static Test global4(4);
     Test local(5);
     }
     
Test* funz2(){
      cout<<"creazione di un oggetto test con new...";
      return new Test(6);
      }
