#include <cstring>
#include <iostream>
using std::cout;

#include <string>
using std::string;

#include "String.h"

#include <ostream>
using std::ostream;


String::String(){
                 cout<<"\nCostruttore di stringa vuota\n";
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
                     cout<<"\nCostruttore di: ";stampa();cout<<"\n";
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
                     cout<<"\nCostruttore di: ";stampa();cout<<"\n";
                     }
  
                      
String::~String(){
                  cout<<"\nDistruttore di: ";stampa();cout<<"\n";
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
        String tmp;
        tmp.copy(*this);
           
        //ripulisco cPtr
        delete []cPtr;
                       
        //setto la nuova size
        size=str.len()+tmp.len();
        
        //rialloco cPtr
        cPtr=new char[size];
           
        //copio tmp su cPtr
        int i=0;
        while(i<tmp.size){
                        cPtr[i]=tmp.cPtr[i];
                        i++;  
                        }
        
        //appendo nelle rimanenti posizioni dell'oggetto corrente la stringa str
        for(int k=0,i=tmp.size;i<size;i++,k++){
            cPtr[i]=str.cPtr[k];
           }
        return *this;
        }

//implemento il costruttore di copie
String::String(const String& str){
             cout<<"\nCostruttore di copie di: ";str.stampa();cout<<"\n";
             size=str.size;
             cPtr=new char [size];
             for(int i=0;i<size;i++)
                 cPtr[i]=str.cPtr[i];
             }
             


//implemento l'operatore =
String& String::operator=(const String& str){
        cout<<"\nEsecuzione dell'operatore '=' sulle stringhe: \"";stampa();cout<<"\" e \"";str.stampa();cout<<"\"\n";
        return copy(str);
        }
 
//implemento l'operatore = per char*
//ciò mi permetterà di poter scrivere:
//String str;
//str="ciao";  <----------
String& String::operator=(const char* str){
        cout<<"\nEsecuzione dell'operatore '=' (per stringhe c)sulle stringhe: \"";stampa();cout<<"\" e \""<<str<<"\"\n";
        delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
        size=strlen(str);
        cPtr=new char[size];
        int i=0;
        while(i<size){
               cPtr[i]=str[i];
               i++;  
               }
        return *this; 
        } 

  
        
//implemento l'operatore +
String& String::operator+(const String& str){
        cout<<"\nEsecuzione dell'operatore '+' sulle stringhe: \"";stampa();cout<<"\" e \"";str.stampa();cout<<"\"\n";
        return append(str);
        }

//implemento l'operatore ==
bool String::operator==(const String& str)const{
     if(size!=str.size)return false;
     if(compare(str)==0)
        return true;
     return false;
     }

//implemento l'operatore !=
bool String::operator!=(const String& str )const{
     return !operator==(str);
     }  

//implemento l'operatore > 
bool String::operator>(const String& str)const{
     if((compare(str)==0)||(compare(str)==-1))
        return false;
     return true;
     }
 
//implemento l'operatore <= (che è l'opposto di >)
bool String::operator<=(const String& str)const{
     return !operator>(str);
     }

//implemento l'operatore < 
bool String::operator<(const String& str)const{
     if((compare(str)==0)||(compare(str)==1))
        return false;
     return true;
     }
      
//implemento l'operatore >= (che è l'opposto di <)
bool String::operator>=(const String& str)const{
     return !operator<(str);
     }

//implemento l'operatore <<
ostream& operator<<(ostream& c,String& str){
         int i=0;
         while(i<str.size){
                 c<<str.cPtr[i];
                 i++;
                 }
         return c;
        }           
 
