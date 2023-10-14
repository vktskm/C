#include<iostream>
using std::cout;
#include "orario.h"
#include <cmath>

Orario::Orario(int h,int m, int s){
                   if((s<=59)&&(m<=59)&&(h<=23)){
                           ss=s;
                           mm=m;
                           hh=h;
                           ok=true;
                          }
                   else {cout<<"errore\n";
                         ok=false;
                         }
                   }
                   
void Orario::display(){
     if(ok){
     cout<<"Ore = "<<hh<<"\n";
     cout<<"Minuti = " <<mm<<"\n";
     cout<<"Secondi = "<<ss<<"\n";
     }

     }

int Orario::secDaOre12(){
  if (ok){
          return ss+60*mm+3600*hh;
          }  
    }
    
Orario Orario::diff(Orario o2){
       int a=hh;
       int b=o2.hh;
       hh=hh%12;
       o2.hh=o2.hh%12;
       int totSec=abs(secDaOre12()-o2.secDaOre12());
       Orario o(totSec/3600,(totSec%3600)/60,(totSec%3600)%60);
       hh=a;
       o2.hh=b;
       return o;
       }
