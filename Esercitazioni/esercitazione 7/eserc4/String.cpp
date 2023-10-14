#include <cstring>
#include <iostream>
using std::cout;

#include "String.h"

String::String(){
                 delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                 size=0;
                 }
    
                 
String::String(const char st[]){
                     delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                     cPtr=new char[strlen(st)];
                     int i=0;
                     while(st[i]!=0){
                                cPtr[i]=st[i];
                                i++;  
                                  }
                     size=strlen(st);
                      }


String::String(const String& str,int start,int end){
                     delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                     size=end-start;
                     cPtr=new char[end-start];
                     int i=0;
                     while(start!=end){
                                cPtr[i]=str.cPtr[start];
                                i++;
                                start++;
                                  }
                     }
  
                      
String::~String(){
                  delete[] cPtr;
                  }


void String::stampa()const{
     int i=0;
     while(i<size){
                 cout<<cPtr[i];
                 i++;
                 }
     }
     
     
int String::len()const{
     return size;
     }
      
     
int String::compare(const String& s2)const{
    int i=0;
    while((i!=size)&&(i!=s2.size)&&(cPtr[i]==s2.cPtr[i])){i++;}
    if(cPtr[i]>s2.cPtr[i])
      return 1;
    if(cPtr[i]<s2.cPtr[i])
      return -1;
    if(cPtr[i]==s2.cPtr[i])
      return 0;
     } 

     
String& String::copy(const String& str){
        delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
        size=str.size;
        cPtr=new char[size];
        int i=0;
        while(i<size){
               cPtr[i]=str.cPtr[i];
               i++;  
               }
        return *this;
        } 
        
String& String::append(const String &str){
            
        //creo una copia temporanea dell'oggetto corrente
        String tmp(*this,0,size);
        
        //ripulisco cPtr
        delete []cPtr;
                       
        //rialloco cPtr
        cPtr=new char[str.len()+tmp.len()];
          
        //copio tmp su cPtr
        int i=0;
        while(i<tmp.size){
                        cPtr[i]=tmp.cPtr[i];
                        i++;  
                        }
        
        //setto la nuova size
        size=str.len()+tmp.len();
        
        //appendo nelle rimanenti posizioni dell'oggetto corrente la stringa str
        for(int k=0,i=tmp.size;i<size;i++,k++){
            cPtr[i]=str.cPtr[k];
           }
                
        return *this;
        }


