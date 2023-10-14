#include <cstring>
#include <iostream>
using std::cout;

#include <string>
using std::string;

#include "String.h"

void String::mem(){
     cout<<"\n\n------------------------------------------------\n";
     cout<<"\nSTRINGA: "<<nome;
     cout<<"\n\nContenuto: ";stampa();
     cout<<"\n\nLunghezza: "<<size;
     cout<<"\n\ncPtr-------->";
     
     if(cPtr==0)
         cout<<"null";
     else
         cout<<cPtr[0];
     cout<<"\n\n";
      
     int i;
     for(i=0;i<size;i++){
           if(((i%5)==0)&&(i!=0)){
              cout<<"\n";
              for(int k=(i-5);k<i;k++){
                   cout<<"    "<<int(cPtr+k)<<"  ";
                   }
              cout<<"\n\n";
              }
           cout<<"  "<<"<<<  "<<cPtr[i]<<"  >>>";
           } 
    int m;
    if(i%5==0)
       m=5;
    else m=i%5;
    cout<<"\n";
    for(int k=(i-m);k<i;k++)  
                   cout<<"    "<<int(cPtr+k)<<"  ";
    cout<<"\n\n------------------------------------------------\n\n";
    }

String::String(){
                 cout<<"Costruttore di stringa vuota\n";
                 delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                 //cPtr=0;//questa istruzione mi assicura che cPtr non punta a nulla
                 size=0;
                 nome="nessun nome(stringa vuota)";
                 }
    
                 
String::String(const char st[],string nm):nome(nm){
                     delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                     cPtr=new char[strlen(st)];
                     int i=0;
                     while(st[i]!=0){
                                cPtr[i]=st[i];
                                i++;  
                                  }
                     size=strlen(st);
                     cout<<"Costruttore di: ";stampa();cout<<"\n";
                      }


String::String(const String& str,int start,int end,string nm):nome(nm){
                     delete []cPtr;//ripulisco cPtr nel caso avesse un altro valore
                     size=end-start;
                     cPtr=new char[end-start];
                     int i=0;
                     while(start!=end){
                                cPtr[i]=str.cPtr[start];
                                i++;
                                start++;
                                  }
                     cout<<"Costruttore di: ";stampa();cout<<"\n";
                     }
  
                      
String::~String(){
                  cout<<"Distruttore di: ";stampa();cout<<"\n";
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
             
             size=str.size;
             cPtr=new char [size];
             for(int i=0;i<size;i++)
                 cPtr[i]=str.cPtr[i];
             cout<<"Costruttore di copie di: ";stampa();cout<<"\n";
             }
             

//implemento l'operatore =
String& String::operator=(const String& str){
        cout<<"Esecuzione dell'operatore '=' sulle stringhe: \"";stampa();cout<<"\" e \"";str.stampa();cout<<"\"\n";
        return copy(str);
        }
 
//implemento l'operatore = per char*
String& String::operator=(const char* str){
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
        cout<<"Esecuzione dell'operatore '+' sulle stringhe: \"";stampa();cout<<"\" e \"";str.stampa();cout<<"\"\n";
        return append(str);
        }

