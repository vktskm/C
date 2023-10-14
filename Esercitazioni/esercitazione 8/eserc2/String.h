#ifndef STRING
#define STRING

#include <string>
using std::string;
   
class String{  
      public://costruttori/distruttori
             String();
             String(const char st[],string nm);
             String(const String& str,int start,int end,string nm);//start e end possono avere anche valore 0
             ~String();
             String(const String&);//costruttore di copie
             
                 
             //metodi public
             void stampa()const;
             int len()const;
             String& copy(const String& str);
             String& append(const String& str);
             int compare(const String& s2)const;
             String& operator=(const String&);
             String& operator=(const char* str);
             String& operator+(const String&);
               
               
             //il seguente metodo stampa a video gli indirizzi
             //di memoria occupati da una stringa
             void mem();
                           
      private:
             char* cPtr;
             int size;
             string nome;
             
             
              
      };


#endif
