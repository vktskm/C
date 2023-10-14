#ifndef STRING
#define STRING

#include <string>
using std::string;
    
#include<ostream>
using std::ostream;



class String{
      
      friend ostream& operator<<(ostream& c,String& str);
      
      public://costruttori/distruttori
             String();
             String(const char st[]);
             String(const String& str,int start,int end);//start e end possono avere anche valore 0
             ~String();
             String(const String&);//costruttore di copie
             
              
                  
             //metodi public
             void stampa()const;
             int len()const;
             String& copy(const String& str);
             String& append(const String& str);
             int compare(const String& s2)const;
             String& operator=(const char* str);
             String& operator=(const String&);
             String& operator+(const String&);
             bool operator==(const String&)const;  
             bool operator!=(const String&)const;  
             bool operator>(const String&)const;
             bool operator<=(const String&)const;
             bool operator<(const String&)const;
             bool operator>=(const String&)const;
                          
                            
      private:
             char* cPtr;
             int size;
      };

//funzioni esterne che influenzano la classe String
ostream& operator<<(ostream& c,String& str);


#endif
