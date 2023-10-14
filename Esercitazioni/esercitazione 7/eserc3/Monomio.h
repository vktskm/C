#ifndef MONOMIO
#define MONOMIO
 
class Monomio{ 
      public: 
             //costruttore
             Monomio(double coefficente=0,int esponente=-1);
              
             //stampa a video il monomio
             void display()const;
             
             //somma 2 monomi
             void somma(const Monomio a,const Monomio b);
             
             //esegue la differenza tra 2 monomi
             void differenza(const Monomio a,const Monomio b);
              
             //esegue la moltiplicazione tra 2 monomi
             void moltiplicazione(const Monomio a,const Monomio b);
             
             //controlla se due monomi hanno lo stesso grado
             bool stessoGrado(const Monomio a,const Monomio b)const;
              
             //ritorna il coefficente
             double getCoef()const;
             
             //ritorna l'esponente della variabile
             int getEsp()const;
             
             //pone il coefficiente del monomio uguale a n
             Monomio& setCoef(const double n);
             
             //pone l'esponente del monomio uguale a n
             Monomio& setEsp(const double n);
            
             
      private:
              //coef= coefficiente del monomio;
              //esp= esponente della variabile x;
              double coef;
              int esp;
      }; 

#endif
