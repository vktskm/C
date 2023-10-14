#include <iostream>
using std::cout;
 
#include "IntegerSet.h"
extern const int dimMax;

 
                         
IntegerSet::IntegerSet(const int elementi[],const int dim){
                         IntegerSet();  
                         for(int i=0;i<dim;i++)
                             insieme[elementi[i]]=true;
                           }
                           
IntegerSet& IntegerSet::display(){
             bool insiemeVuoto=true;
             for(int i=0;i<dimMax;i++)
                if (insieme[i]==true){
                   cout<<i<<"  ";
                   insiemeVuoto=false;
                   }
             if(insiemeVuoto==true)
               cout<<"-";    
             return *this;
            } 
            
bool IntegerSet::hasElement(int el)const{
     if(controllaRange(el)==true)
      if (insieme[el]==true)
        return true;
     return false;
     }
     
void IntegerSet::insertElement(int el){
     if(controllaRange(el)==true)
        insieme[el]=true;
     }
     
IntegerSet IntegerSet::unionOfIntegerSet(IntegerSet set)const{
           IntegerSet ris;
           for(int i=0;i<dimMax;i++)
              if((insieme[i]==true)||(set.hasElement(i)))
                  ris.insertElement(i);
           return ris;
           }

IntegerSet IntegerSet::intersectionOfIntegerSet(IntegerSet set)const{
           IntegerSet ris;
           for(int i=0;i<dimMax;i++)
              if((insieme[i]==true)&&(set.hasElement(i)))
                  ris.insertElement(i);
           return ris;
           }
  
void IntegerSet::deleteElement(int el){
     if(controllaRange(el)==true)
          insieme[el]=true;
     }
 
 void IntegerSet::toVoid(){
      for(int i=0;i<dimMax;i++)
       insieme[i]=false;
      }

bool IntegerSet::controllaRange(const int el)const{
     if(el<dimMax)
         return true;
     return false;
     }
     
bool IntegerSet::isEqualTo(const IntegerSet set)const{
     int i;
     for(i=0;(i<dimMax);)
     if(set.hasElement(i)==insieme[i])
         i++;
     else return false;
     return true;
     
     }
 
IntegerSet::IntegerSet(int a,int b,int c,int d,int e){
            for(int i=0;i<dimMax;i++)
            insieme[i]=false;
            
            if(a!=-1)
                 insieme[a]=true;
            else return; 
            
            if(b!=-1)
                 insieme[b]=true;
            else return;
            
            if(c!=-1)
                 insieme[c]=true;
            else return;
            
            if(d!=-1)
                 insieme[d]=true;
            else return;
            
            if(e!=-1)
                 insieme[e]=true;
            else return;
               }

