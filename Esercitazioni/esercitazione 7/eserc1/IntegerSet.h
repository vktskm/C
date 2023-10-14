#ifndef INTEGERSET
#define INTEGERSET
 
//dimMax è una variabile che dà il limite massimo di una
//istanza di IntegerSet
static const int dimMax=50;

class IntegerSet{
      public:
             //costruttore di default con 5 argomenti
             IntegerSet(int a=-1,int b=-1,int c=-1,int d=-1,int e=-1);
             
              
             
             //inserisce gli elementi dell'array 'elementi'
             IntegerSet(const int elementi[],const int dim);
             
             //Visualizza gli elementi dell'insieme
             IntegerSet& display();
             
             //unione 
             IntegerSet unionOfIntegerSet(IntegerSet set)const;
             
             //intersezione 
             IntegerSet intersectionOfIntegerSet(IntegerSet set)const;
             
             //verifica se l'insieme contiene l'elemento 'el'
             bool hasElement(int el)const;
              
             //inserisce l'elemento 'el'
             void insertElement(int el);
             
             //cancella l'elemento 'el'
             void deleteElement(int el);
             
             //toglie tutti gli elementi dall'insieme
             void toVoid();
             
             //controlla se l'elemento 'el' è inseribile
             bool controllaRange(const int el)const;
             
             //controlla se due insiemi sono uguali
             bool isEqualTo(const IntegerSet set)const;
     
      private:
              bool insieme[dimMax];
      };



#endif
