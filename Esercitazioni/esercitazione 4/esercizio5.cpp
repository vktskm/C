#include <iostream>
using std::cout;

#include <cstdlib>

#include<cstring>

void simmetrica(char *str);

main(){
       char str[]="prov";
       simmetrica(str);
       cout<<"str = "<<str<<"\n";
       system("pause");
       }

void simmetrica(char *str){
     int len=strlen(str)-1;     
     while((len!=0)&&(len!=-1)){
       *(str)^=*(str+len);
       *(str+len)^=*(str);
       *(str)^=*(str+len);
       str++;
       len-=2;
     }
     }
