#ifndef ELEMENTO_H
#define ELEMENTO_H

static int numeroCampiElemento=3;

class Elemento{
      public:
             Elemento(const char* nom="-vuoto-",const char* cogn="-vuoto-",
                      const char* numTel="0" );
             ~Elemento();
             void setNome(const char* nom);
             void setCognome(const char* cogn);
             void setNumeroTelefono(const char* numTel);
             const char* getNome()const;
             const char* getCognome()const;
             const char* getNumeroTelefono()const;
             void print()const;
             bool operator==(Elemento& b);
      private:
              char nome[40];
              char cognome[40];
              char numeroTelefono[40];
              
      };



#endif
