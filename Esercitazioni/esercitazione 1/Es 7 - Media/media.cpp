#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>

int main(){
    int ins;
    double med = 0.0, n;
    cout<<"Questo programma calcola la media aritmetica di numeri interi.\nInserire dei numeri interi separati da spazio.\nPer terminare la serie digitare 9999 seguito da 'Invio'"<<endl;
    cin>>ins;
    for (n = 0.0; ins != 9999;n++){
        
        med += ins;
        cin>>ins;
        }
    if (n){
       med /= n;
       cout<<"La media dei numeri digitati e' "<<med<<endl;
       }
    else{
         cout<<"Nessun numero inserito."<<endl;
         }
    system("PAUSE");
    return 0;
}
