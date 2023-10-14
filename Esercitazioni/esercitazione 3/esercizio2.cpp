#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

bool digitato(int [],const int &,const int &);

main(){
       int dig;
       const int adim=20;
       int a[adim]={0};
       for(int i=0;i<adim;i++){
              do{
             cout<<"Inserisci il valore "<<i<<": ";
             cin>>dig;
             if((dig<10)||(dig>=100))
                cout<<"ERRORE: numero fuori dal range!\n";
             }while((dig<10)||(dig>=100));
             if(!(digitato(a,adim,dig)))
                       a[i]=dig;
             }
       cout<<"\nStampa dei numeri inseriti:\n";
       for(int i=0;(i<adim);i++)
            if (a[i]!=0)
            cout<<a[i]%100<<"  inserito "<<a[i]/100+1<<" volte;\n";
       system("pause");
       }

bool digitato(int a[],const int &adim,const int &dig){
     for(int i=0;(i<adim);i++){
             if((a[i]%100)==dig){
                 a[i]+=100;
                 return true;
                 }
                 }
     return false;        
            
           
     
     }
