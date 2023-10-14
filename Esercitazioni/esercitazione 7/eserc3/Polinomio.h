#ifndef POLINOMIO
#define POLINOMIO

#include "Monomio.h"
static int lunghezzaMassima=40;
class Polinomio{
      public:
             //costruttore di default: pone tutti i monomi del polinomio
             //a 0 e i loro esponenti a -1
             Polinomio(int dim=lunghezzaMassima);
             
             //costruttore
             Polinomio(Monomio vet[],int dimVet);
             
             //costruisce un polinomio con un numero di posti pari a
             //lunghezzaPolinomio di cui i primi dimVet posti sono occupati
             //dai monomi del vettore vet
             Polinomio(Monomio vet[],int dimVet,int lunghezzaPolinomio);
            
             //stampa a video il polinomio
             void display()const;
           
             //riduce il polinomio:
             //es.: se il polinomio è del tipo 3x^2+4x^2+x somma i termini
             //dello stesso grado ottenendo 7x^2+x
             Polinomio& riduci();
             
             //ritorna il monomio numero 'n' dell'array 'pol'
             Monomio getMonomioAt(int n)const;
             
             //restituisce il prossimo indice del vettore 'pol' che 
             //ha un monomio di coefficente 0 
             int prossimoPostoLibero()const;
             
             //Ritorna il monomio di grado 'g'; se non c'è ritorna null
             Monomio Polinomio::getMonomioDiGrado(int g)const;
             
             //ordina il polinomio in base ai gradi dei monomi, 
             //in ordine decrescente
             void ordina();
             
             //pone tutti gli elementi del polinomio a monomi nulli
             //di esponente -1
             void riinizializza();
             
             //esegue la somma tra 2 polinomi
             void somma(const Polinomio a,const Polinomio b);
             
             //attribuisce all'oggetto corrente un nuovo polinomio
             //che sarebbe l'opposto di 'a'
             void opposto(Polinomio a);
             
             //esegue la differenza tra 2 polinomi
             void differenza(const Polinomio a, Polinomio b);
             
             //esegue la moltiplicazione 
             void moltiplicazione(const Polinomio a, const Polinomio b);
             
             //restituisce length
             int getLength(); 
             
      private:
            int length;
            Monomio* pol;
      };



#endif
