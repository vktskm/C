#ifndef STRING
#define STRING

   
class String{ 
      public://costruttori/distruttori
             String();
             String(const char st[]);
             String(const String& str,int start,int end);//start e end possono avere anche valore 0
             ~String();
                
             //metodi public
             void stampa()const;
             int len()const;
             String& copy(const String& str);
             String& append(const String& str);
             int compare(const String& s2)const;
                           
      private:
             char* cPtr;
             int size;
              
      };


#endif
