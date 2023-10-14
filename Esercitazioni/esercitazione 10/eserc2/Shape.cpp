#include "Shape.h"

#include <iostream>
using std::cout;
using std::endl;

Shape::Shape(const string& n):nome(n){
               ;
             }
             
void Shape::setNome(const string& n){
     nome=n;
     }

string Shape::getNome()const{
       return nome;
       }
        
void Shape::print()const{
     cout<<"NOME: "<<nome<<endl;
     }
