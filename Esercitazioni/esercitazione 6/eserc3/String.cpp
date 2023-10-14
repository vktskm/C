#include <iostream>
using std::cout;
#include "String.h"

extern const int lunghezzaMax;

String::String(){
                 stringa[0]=0;
                 }

String::String(char str[]){
                  int i=0; 
                  for(;(str[i]!=0)&&(i<lunghezzaMax-1);i++)
                    stringa[i]=str[i];
                  stringa[i]=0;
                   }

String& String::print(){
        for(int i=0;(stringa[i]!=0);i++)
          cout<<stringa[i];
          return *this;
        }
 
int String::len()const{
    int i=0;
    for(;(stringa[i]!=0);i++);
    return i;
    }
 
char String::charAt(int n)const{
     if(n<lunghezzaMax)
       return stringa[n];
     return -1;
     }

String& String::append(const String s){
        int i,k;
        for( i=len(), k=0; (s.charAt(k)!=0)&&(i<lunghezzaMax-1); k++,i++){
           stringa[i]=s.charAt(k);
           }
        stringa[i]=0;
        return *this;    
        }

int String::compare(const String s2)const{
    int i=0;
    while((s2.charAt(i)!=0)&&(stringa[i]!=0)&&(stringa[i]==s2.charAt(i)))
       i++;
    if(stringa[i]>s2.charAt(i))
      return 1;
    if(stringa[i]<s2.charAt(i))
      return -1;
    if(stringa[i]==s2.charAt(i))
      return 0;
    }
    
String& String::copy(const String s2){
        for(int i=0;i<s2.len()+1;i++)
            stringa[i]=s2.charAt(i);
        return *this;          
        }
