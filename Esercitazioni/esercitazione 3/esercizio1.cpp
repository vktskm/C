#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>

double somma(double [],const int);
void copia(float [] ,float[] ,const int &);
double max(double[],const int &);
double min(double[],const int &);

main(){
       const int dim=9;
       int f[9]={0,1,2,3,4,5,6,7,8};
       cout<<"Settimo valore: "<<f[6]<<"\n\n";
       
       double b[10]={0.0};
       cout<<"Inserisci il valore da inserire nell'elemento 4: ";
       cin>>b[4];
       cout<<"b[4] = "<<b[4]<<"\n\n";
       
       int g[]={8,8,8,8,8};
       cout<<"vettore g:\n";
       for(int i=0;i<5;i++)
           cout<<g[i]<<"  ";
       cout<<"\n\n";
       
       const int cdim=100;
       double c[cdim];
       for(int i=0;i<cdim;i++)
            c[i]=1;
       cout<<"La somma degli elementi del vettore c e': "<<somma(c,cdim)<<"\n\n";
       
       const int adim=11;
       float a[adim];
       for (int i=0;i<adim;i++)
            a[i]=5*i;
       float b2[34]={0}; 
       copia(a,b2,adim);
       cout<<"Vettore b dopo la copia:\n";
       for (int i=0;i<34;i++)
           cout<<b2[i]<<"   ";
       cout<<"\n\n";
       
       const int wdim=10;
       double w[wdim]={23,45,3,45,1,29};
       cout<<"Il valore piu' grande: "<<max(w,wdim)<<"\nIlvalore piu' piccolo: "<<min(w,wdim);            
       cout<<"\n";
       
       system("pause");
       }
       
double somma(double vet[],const int dim){
       double somma=0;
       for (int i=0;i<dim;i++)
          somma+=vet[i];
       return somma;
       }
       
void copia(float  a[],float b[],const int &adim){
       for(int i=0;i<adim;i++)
           b[i]=a[i];     
            }
            
double min(double w[],const int &wdim){
       double ris=w[0];
       for(int i=1;i<wdim;i++)
          if(w[i]<ris)
              ris=w[i];
       return ris;
       }
       
double max(double w[],const int &wdim){
       double ris=w[0];
       for(int i=1;i<wdim;i++)
          if(w[i]>ris)
              ris=w[i];
       return ris;
       }
