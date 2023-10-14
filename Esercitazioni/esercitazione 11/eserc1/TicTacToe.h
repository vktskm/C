#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe{

      public:
             TicTacToe();
             bool giocatore1(int i,int j);
             bool giocatore2(int i,int j);
             
             //il seguente metodo ritorna il numero del vincitore
             //(1 se vince il primo giocatore; 2 per il secondo;
             //0 nessuno)
             int vincitore();
             
             //gioca il computer per il giocatore gioc
             //per default il computer rappresenta le caselle con il 2
             //ma nel main può giocare per primo o no.
             void computer();
             
             void print();
      private:
              
              //indicano se esistono colonne righe o diagonali in
              //cui c'è un 2 e le altre 2 caselle libere
              bool rigaLibera(int& a,int& b);
              bool colonnaLibera(int& a,int& b);
              bool diagonaleLibera(int& a,int& b);
              
              int array[3][3];
      };



#endif
