#include "Polinomio.h"
#include <iostream>
using std::cout;
using std::cin;

extern int lunghezzaMassima;


Polinomio::Polinomio(int dim):length(dim){
                     pol=new Monomio[dim];
                     Monomio m;
                     for(int i=0;i<dim;i++){
                        pol[i]=m;  
                        }
                       }
                      
Polinomio::Polinomio(Monomio vet[],int dimVet,int lunghezzaPolinomio):length(lunghezzaPolinomio){
                     pol=new Monomio[lunghezzaPolinomio];
                     for(int i=0;i<dimVet;i++){
                        pol[i]=vet[i];  
                        }
                     Monomio m;
                     for(int i=dimVet;i<lunghezzaPolinomio;i++){
                        pol[i]=m;  
                        }
                        riduci();
                          ordina();  
                  }
                                                  
Polinomio::Polinomio(Monomio vet[],int dimVet):length(dimVet){
                          pol=new Monomio[dimVet];
                          for(int i=0;i<dimVet;i++){
                             pol[i]=vet[i];  
                            } 
                          riduci();
                          ordina();  
                       }

void Polinomio::display()const{
    
     bool primoElStampato=false;
     for (int i=0;i<length;i++){
     if((pol[i].getCoef()!=0)&&(primoElStampato==false)){//evito che il segno '+' vanga stampato pure alla fine, dopo aver stampato tutti i monomi
       pol[i].display();
       primoElStampato=true;
       }
     else if((pol[i].getCoef()!=0)){//evito che stampi i monomi nulli
          cout<<" + ";
          pol[i].display();
          }
     } 
     }

Polinomio& Polinomio::riduci(){
     int i,k;
     for (i=0;i<length;i++){
      for (k=i+1;k<length;k++){
          if(pol[i].getEsp()==pol[k].getEsp()&&(pol[i].getEsp()!=-1)){
             pol[i].somma(pol[i],pol[k]);
             pol[k].setCoef(0);
             pol[k].setEsp(-1);
             }
      }
      }
      return *this;
     }

Monomio Polinomio::getMonomioAt(int n)const{
        return pol[n];
        }

int Polinomio::prossimoPostoLibero()const{
    int i;
    for(i=0;(i<length)&&(pol[i].getCoef()!=0);i++);
    if(i==length)
       return -1;
    return i;
       
    }
  
void Polinomio::ordina(){
     
                  int dim=length-1;
                  Monomio tmp;
                  bool ordinato=false;
                  while(!ordinato){
                                   ordinato=true;
                                   for(int i=0;i<dim;i++){
                                           if((pol[i].getEsp())<(pol[i+1].getEsp())){
                                                 tmp=pol[i+1];
                                                 pol[i+1]=pol[i];                                
                                                 pol[i]=tmp;
                                                 ordinato=false;
                                                }
                                           }
                                      dim--;
                                   }
                  }

Monomio Polinomio::getMonomioDiGrado(int g)const{
        Monomio ris;
        int i;
        for (i=0;(i<length)&&(pol[i].getEsp()!=g);i++);
        if(i==length)return ris;
        return pol[i];
        }

void Polinomio::riinizializza(){
     Monomio m;
     for(int i=0;i<length;i++){
                        pol[i]=m;  
                        }
     }

void Polinomio::somma(const Polinomio a,const Polinomio b){
     //pulisco il polinomio innanzitutto
     riinizializza();
     
     int i,k,indicePol=0;
     Monomio m;
     
     //comincio col sommare i termini di grado uguale:
         
     //eseguo la somma tra a e b percorrendo i polinomi
     for (i=0;i<length;i++){
     
          //pongo la condizione dei monomi non nulli (appena trovo il
          //primo monomio nullo di 'a' esco fuori perche il resto 
          //dei monomi saranno nulli, infatti il costruttore crea dei 
          //polinomi ponendo i termini nulli agli ultimi posti)
    if((a.getMonomioAt(i)).getCoef()==0)break;
       
    //eseguo la somma     
    m=b.getMonomioDiGrado((a.getMonomioAt(i)).getEsp());
    if(m.getEsp()!=-1){
       pol[indicePol].somma(m,a.getMonomioAt(i));
       indicePol++;
       
       }
     }
     
     ordina();
    
     
     //a questo punto inserisco eventuali termini mancanti dal polinomio b
     //e dal polinomio a
     //(i termini mancanti di b e di a sarebbero quelli che avevano un grado 
     //diverso dai monomi del polinomio rispettivamente di a e di b, e 
     //che per questo motivo 
     //non sono stati sommati). Basta fare una prova con i polinomi seguenti:
     //a=8x^2+5x^1+2
     //b=4x^3+8x^2+13
     //In questo esempio nel risultato non compariranno i termini 4x^3 e
     //5x^1 in quanto la loro somma non è stata eseguita.
    
    
    //inserimento dei termini mancanti di 'a'
    for (i=0;i<length;i++){
    if((a.getMonomioAt(i)).getCoef()==0)break;
    m=getMonomioDiGrado((a.getMonomioAt(i)).getEsp());
    if(m.getEsp()==-1)
    pol[prossimoPostoLibero()]=a.getMonomioAt(i);
    }
    
    //inserimento dei termini mancanti di 'b'
    for (i=0;i<length;i++){
    if((b.getMonomioAt(i)).getCoef()==0)break;
    m=getMonomioDiGrado((b.getMonomioAt(i)).getEsp());
    if(m.getEsp()==-1)
    pol[prossimoPostoLibero()]=b.getMonomioAt(i);
    }
    
    ordina();
          
}

int Polinomio::getLength(){
     return length;
     }

void Polinomio::opposto(Polinomio a){
     if(a.getLength()>=length)
     for (int i=0;i<length;i++){
     if(pol[i].getCoef()==0)break;
     pol[i].setCoef(-(a.getMonomioAt(i).getCoef()));
     pol[i].setEsp((a.getMonomioAt(i).getEsp()));

     }
    }

void Polinomio::differenza(const Polinomio a, Polinomio b){
     Polinomio p;
     p.opposto(b);
     somma(a,p);
     }
    
void Polinomio::moltiplicazione(const Polinomio a, const Polinomio b){
     //pulisco il polinomio innanzitutto
     riinizializza();
     
     int i,k,indicePol=0;
           
     //eseguo la moltiplicazione tra a e b percorrendo i polinomi
     for (i=0;i<length;i++){
     
          //pongo la condizione dei monomi non nulli (appena trovo il
          //primo monomio nullo di 'a' esco fuori perche il resto 
          //dei monomi saranno nulli, infatti il costruttore crea dei 
          //polinomi ponendo i termini nulli agli ultimi posti)
     if((a.getMonomioAt(i)).getCoef()==0)break;
      
     for (k=0;k<length;k++){
        if((b.getMonomioAt(k)).getCoef()==0)break; 
        pol[indicePol].moltiplicazione(a.getMonomioAt(i),b.getMonomioAt(k)); 
        indicePol++;
         } 
     }
     riduci();
     ordina();
              
     }


