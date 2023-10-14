#include "Date.h"

Date::Date(int g,int m,int a){
               setGiorno(g).setMese(m).setAnno(a);
               }

Date::~Date(){
               }
               
//i controlli fatti dai set non tengono conto dei mesi
//con meno di 31 giorni               
Date& Date::setGiorno(int g){
      if((g<=31)&&(g>0))
          giorno=g;
      else giorno=0;
      return *this;
      }
      
//i controlli fatti dai set non tengono conto dei mesi
//con meno di 31 giorni     
Date& Date::setMese(int m){
      if((m<=12)&&(m>0))
          mese=m;
      else mese=0;
      return *this;
      }
      
//i controlli fatti dai set non tengono conto dei mesi
//con meno di 31 giorni     
Date& Date::setAnno(int a){
      if((a<=999999)&&(a>0))
          anno=a;
      else anno=0;
      return *this;
      }

int Date::getGiorno()const{
    return giorno;
    }
    
int Date::getMese()const{
    return mese;
    }
    
int Date::getAnno()const{
    return anno;
    }
    
void Date::print()const{
     cout<<giorno<<"/"<<mese<<"/"<<anno;
     }
     
ostream& operator<<(ostream& o,const Date& d){
         o<<d.giorno<<"/"<<d.mese<<"/"<<d.anno;
         return o;
         }
