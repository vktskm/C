#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

#include <vector>
using std::vector;

bool digitato(vector <int>&,const int &,const int &);

main(){
       int min,max,adim;
       cout<<"Numero dati da inserire: ";
       cin>>adim;
       cout<<"Max: ";
       cin>>max;
       cout<<"Min: ";
       cin>>min;
       vector <int> a(adim);
       
       int dig;
       
       
       for(int i=0;i<adim;i++){
             do{
             cout<<"Inserisci il valore "<<i<<": ";
             cin>>dig;
             if((dig<min)||(dig>max))
                cout<<"ERRORE: numero fuori dal range!\n";
             }while((dig<min)||(dig>max));
          a.at(i)=dig;
          }
       cout<<"\nStampa dei numeri inseriti:\n";
       for(int i=0;(i<adim);i++)
            if(!(digitato(a,i,a.at(i))))
            cout<<a.at(i)<<"   ";
       system("pause");
       }

bool digitato(vector <int> & a,const int &limite,const int &dig){
     for(int i=0;(i<limite);i++){
             if(a.at(i)==dig){
                 
                 return true;
                 }
                 }
     return false;        
            
           
     
     }
