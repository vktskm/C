#ifndef STRING
#define STRING

//posso definire prima della compilazione la lunghezza massima
//che puo avere il vettore che contiene la stringa modificando 
//il seguente parametro:
static const int lunghezzaMax=20;
//chiaramente la lunghezza max della stringa sarà lunghezzaMax-1
//poichè l'ultimo elemento non sarà stampato.
//Dunque, se voglio una stringa con un massimo di, per esempo, 10 caratteri
//devo settare lunghezzaMax a 11.
 
class String{
      public:
             //crea una stringa lunga 0, cioè una stringa vuota
             String();
             
             //crea una stringa da un array di char
             String(char str[]);
             
             //stampa a video la stringa
             String& print();
             
             //restituisce la lunghezza della stringa
             int len()const;
             
             //concatena una o più stringhe alla prima
             String& append(const String s); 
             
             //restituisce il carattere alla posizione 'n'
             char charAt(int n)const;
             
             //confronta due stringhe:
             //es.: s1.compare(s2);
             //se s1>s2 viene ritornato 1
             //se s1=s2 viene ritornato 0
             //se s1<s2 viene ritornato -1
             int compare(const String s2)const;
             
             //copia una stringa nell'altra
             //es.: s1.copy(s2);
             //viene cipiato s2 in s1;
             String& copy(const String s2);
      private:
              char stringa[lunghezzaMax];
      };

#endif
