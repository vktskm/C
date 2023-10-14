#include <cstdlib>

#include <iostream>
using std::cout;
using std::cin;

void crivello(bool [],const int);
void display(bool [],int);

main(){
       const int dim=1000;
       bool a[dim];
       for (int i=0;i<dim;i++)
          a[i]=true;
       crivello(a,dim);
       cout<<"Numeri primi:\n";
       display(a,dim);
       system("pause");
       }
       
void crivello(bool vet[],const int dim){
     for(int i=2;i<(dim/2);i++)
         for(int j=2;(j*i)<dim;j++)
            vet[i*j]=false;
     }
     

void display(bool vet[],int dim){
     for(int i=1;i<dim;i++)
      if(vet[i]==true)
       cout<<i<<"\n";
     }     
