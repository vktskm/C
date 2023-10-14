#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using std::getline;
#include <cstdlib>
#include <string>
using std::string;
#include "gradebk.h"


//implemento i metodi della classe Registro presenti in registro4.h
             Registro::Registro(){}
             Registro::Registro(string n, string m){
                  setNomeCorso(n);
                  setNomeDocente(m);
                  }
             void Registro::setNomeCorso(string n){
                  NomeCorso=n;
                  }
             string Registro::getNomeCorso(){
                    return NomeCorso;
                    }
             void Registro::display(){
                  cout<<"Registro di "<<getNomeCorso()<<endl;
                  cout<<"Il docente del corso e' "<<getNomeDocente()<<endl;
                  system("PAUSE");
                  }
             void Registro::setNomeDocente(string m){
                  NomeDocente=m;
                  }
             string Registro::getNomeDocente(){
                    return NomeDocente;
                    }
