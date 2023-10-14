#include <iostream>
using std::cout;

#include "Monomio.h"
  
                  
Monomio::Monomio(double coefficente,int esponente):coef(coefficente),esp(esponente){
                   ;     
                   }
                    
void Monomio::display()const{
         if((getCoef()!=0)&&(getEsp()!=0))
            cout<<coef<<"x^"<<esp;
         if((getCoef()==0)||(getEsp()==0))
            cout<<coef;
         
         }

void Monomio::moltiplicazione(const Monomio a,const Monomio b){
         this->coef=a.getCoef()*b.getCoef();
         this->esp=a.getEsp()+b.getEsp();
         }

void Monomio::differenza(const Monomio a,const Monomio b){
         this->coef=a.getCoef()-b.getCoef();
         this->esp=a.getEsp();
         }

void Monomio::somma(const Monomio a,const Monomio b){
         this->coef=a.getCoef()+b.getCoef();
         this->esp=a.getEsp();
         }

int Monomio::getEsp()const{
       return Monomio::esp;
       }
 
double Monomio::getCoef()const{
       return Monomio::coef;
       }

bool Monomio::stessoGrado(const Monomio a,const Monomio b)const{
     if(a.getEsp()==b.getEsp())
        return true;
     return false;
     }
     
Monomio& Monomio::setEsp(const double n){
        esp=n;
        return *this; 
         }     
     
Monomio& Monomio::setCoef(const double n){
     coef=n;
     return *this;
     } 
