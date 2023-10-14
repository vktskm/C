#include "Film.h"

#include <iostream>
using std::cout;

Film::Film(string tit,int anno,int numeroAtt,Attore* att[]):
                  titolo(tit),annoProduzione(anno)
                  {
                     if (numeroAtt<=5){
                          for(int k=0;k<numeroAtt;k++)
                               attori[k]=att[k];  
                          numeroAttori=numeroAtt;
                           }
                     else {
                          cout<<"Numero attori troppo elevato.";
                          
                       }
                  }

void Film::print()const{
                  cout<<"Titolo: "<<titolo<<"\n";
                  cout<<"Anno di produzione: "<<annoProduzione<<"\n";
                  cout<<"Attori: ";
                  int i=0;
                  if(numeroAttori!=0){
                     for(;i<(numeroAttori-1);i++)
                         cout<<attori[i]<<", ";
                     cout<<attori[i]<<", ";
                  }
                  }

ostream& operator<<(ostream& o,const Film& f){
                  o<<"Titolo: "<<f.titolo<<"\n";
                  o<<"Anno di produzione: "<<f.annoProduzione<<"\n";
                  o<<"Attori: ";
                  int i=0;
                  if(f.numeroAttori!=0){
                     for(;i<(f.numeroAttori-1);i++)
                         o<<*f.attori[i]<<", ";
                     o<<*f.attori[i]<<".";
                  }
         }
         
istream& operator>>(istream& i,Film& f){
         i>>f.titolo>>f.annoProduzione>>f.numeroAttori;
                     
         for(int k=0;k<f.numeroAttori;k++){
           f.attori[0]=new Attore;
           i>>*f.attori[0];
           }
         }

