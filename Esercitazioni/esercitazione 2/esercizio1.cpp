#include<cstdlib>
#include <iostream>
using std::cout;
using std::cin;

#include <cmath>

double hypotenuse(double, double);

main(){
       double c1,c2;
       cout<<"Inserisci il primo cateto: " ;
       cin>>c1;
       cout<<"Inserisci il secondo cateto: " ;
       cin>>c2;
       cout<<"L'ipotenusa e': "<<hypotenuse(c1,c2)<<"\n";
       system("pause");
       } 
       
double hypotenuse(double c1, double c2){
       return sqrt(c1*c1+c2*c2);
             }
