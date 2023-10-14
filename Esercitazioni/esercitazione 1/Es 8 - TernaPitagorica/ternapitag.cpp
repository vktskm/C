#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>

int main (){

    int lim, counter = 0;
    cout<<"Questo programma stampa a video tutte le terne pitagoriche per valori strettamente minori del valore desiderato."<<endl;
    cout<<endl<<"Inserire valore massimo di ricerca:"<<endl;
    cin>>lim;
    for (int side1 = 1; side1<lim; side1++){   
        for(int side2 = 1; side2<lim; side2++){
                for(int hypotenuse = 1; hypotenuse<lim; hypotenuse++){
                        if (hypotenuse*hypotenuse == side1*side1 + side2*side2){
                                                  cout<<"- "<<side1<<" "<<side2<<" "<<hypotenuse<<endl;
                                                  counter++;
                                                  }
                        }
                }
        }
    cout<<"Sono possibili "<<counter<<" combinazioni."<<endl;
    system("PAUSE");
    return 0;
}                    
    
    
