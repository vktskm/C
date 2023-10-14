#ifndef RUBRICA_H
#define RUBRICA_H

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include "Elemento.h"

enum Campo{campoNome,campoCognome,campoNumeroTelefono};


class Rubrica{
      public:
             Rubrica(char* nomeRub="elenco.txt");
             ~Rubrica();
             bool setNomeRubrica(char* nomeRub);
             const char* getNomeRubrica()const;
             bool inserisci(const char* nome,const char* cognome,const char* numTelefono);
             void print()const;
             
             //ritorna il numero della riga in cui si trova
             //l'elemento cercato e inserisce l'elemento in 'el';
             //il parametro'Campo c' specifica il tipo di ricerca
             //(per nome,cognome o numero di tel).
             //la ricerca inizia dalla riga numero 'start' del file
             int getElemento(Campo c,char* contenutoCampo,Elemento& el,int start);
             
             //la seguente funzione cancella un elemento.
             //NOTA: si suppone che l'elemento da cancellare
             //sia già presente nella rubrica, infatti viene
             //passato in intero come arg che
             //indica il numero della riga (all'interno del file)
             // in cui si trova l'elemento da cancellare
             void cancella(int numeroRiga );
             
             //copia un file in un altro
              void copy(ofstream& out, ifstream& in);
              
              //modifica un elemento; tale elemento esiste già
              //nell'elenco ed è passato come argomento 'el',
              //assieme alla riga in cui si trova;
              //gli altri arg riguardano la modifica;
              //una volta che il seguente metodo effettua la 
              //modifica all'oggetto 'el', provvederà anche ad
              //eliminare il vecchio elemento dall'elenco e ad
              //aggiungere il nuovo
              void modifica(Elemento& el,int numRiga,Campo campoPerInserimento,char* contenutoNuovo);
             
            
      private:
              char nomeRubrica[40];
              
              //calcola il prossimo elemento dello stream
              // legandolo a 'el'; se non siamo alla
              //fine del file verrà ritornato true
              bool getNext(ifstream& i,Elemento& el)const;
              
              //controlla se la rubrica contiene un elemento
              bool contiene(const char* nome,const char* cognome,const char* numTelefono);
              
      };

#endif

