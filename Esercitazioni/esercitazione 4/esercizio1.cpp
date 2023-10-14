#include <iostream>
using std::cout;

#include <cstdlib>

main(){
       //a
       int values[]={2,4,6,8,10};
       
       //b
       int * vPtr;
       
       //c
       for(int i=0;i<5;i++)
          cout<<values[i]<<"\n";
       
       //d
       vPtr=values;
       //vPtr=&values[0];//<---questa istruzione puo essere tolta       
       
       //e
       for(int i=0;i<5;i++)
          cout<<*vPtr++<<"\n";
          
       //f   
       for(int i=0;i<5;i++)
          cout<<*(values+i)<<"\n";
          
       //g
       vPtr=values;
       for(int i=0;i<5;i++)
          cout<<vPtr[i]<<"\n";
          
       //h
       vPtr=values;
       cout<<vPtr+3<<"\n";
       cout<<*(vPtr+3)<<"\n";
       
       //i
       vPtr=&values[4];
       cout<<vPtr-4<<"\n";
       cout<<*(vPtr-4)<<"\n";
       
       system("pause");
       }
