#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "crypto.h"
#include <string>

Crypto::Crypto(int n){
                   if (verificaNum(n)){
                                    numero = criptaNum(n);
                                    }           
                   else {
                        numero = -1;
                        messErr();
                        }
                   }

bool Crypto::verificaNum(int n){
     if((n<10000)&&(n>0)){
                          return true;
                          }
     return false;
     }

void Crypto::messErr(){
       cout<<"Il numero inserito non e' corretto."<<endl;
       return;
       }
                             
int Crypto::criptaNum(int n){
    vett[3] = n;
    //colloco le 4 cifre (situate momentaneamente in vett[3]) nel vettore di 4 posizioni
    for (int i = 1000, j = 0; i>=10; j++, i /= 10){ 
        vett[j] = vett[3]/i;
        vett[3] %= i;
        }
    //eseguo la prima fase del processo di crittografia
    for (int k=0; k<4; k++){
        vett[k] = (vett[k] + 7)%10;
        }
    //eseguo la seconda fase
    for(int h = 0; h < 2; h++){
        tmp = vett[h];
        vett[h] = vett[h+2];
        vett[h+2] = tmp;
        }
    //porto il numero crittografato in 'int'
    for (int l = 10, j = 2; l<=1000; j--, l *= 10){
        vett[3] += vett[j]*l;
        }
    
    return vett[3];
}   

int Crypto::decriptNum(int n){
    vett[3] = n;
    //colloco le 4 cifre (situate momentaneamente in vett[3]) nel vettore di 4 posizioni
    for (int i = 1000, j = 0; i>=10; j++, i /= 10){ 
        vett[j] = vett[3]/i;
        vett[3] %= i;
        }
        
    //procedo con le fasi inverse rispetto alla crittografia
    for(int h = 0; h < 2; h++){
        tmp = vett[h];
        vett[h] = vett[h+2];
        vett[h+2] = tmp;
        }
    
    //trovata la funzione inversa rispetto a quella di crittografia procedo con la riassegnazione dei valori originari
    for (int k=0; k<4; k++){
        vett[k] += 3;
        if (vett[k]>=10){
                         vett[k] -= 10;
                         }
        } 
    
    //porto il numero decrittografato in 'int'
    for (int l = 10, j = 2; l<=1000; j--, l *= 10){
        vett[3] += vett[j]*l;
        }
    return vett[3];
}
