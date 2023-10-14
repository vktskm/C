#include "Rubrica.h"

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <ios>
using std::ios;

#include <iostream>
using std::cout;


Rubrica::Rubrica(char* nomeRub){
                   bool esitoSettaggioNome=setNomeRubrica(nomeRub);
                   
                   //se si sono riscontrati errori durante la
                   //creazione del nuovo oggetto provvedo alla eliminazione
                   //dello stesso
                   if(esitoSettaggioNome==false)
                      delete this;
                   }
                   
Rubrica::~Rubrica(){
                    }
                    
bool Rubrica::setNomeRubrica(char* nomeRub){
     //controllo che il nome termini per ".txt";
     //in tal caso setto il nome altrimenti
     //scrivo un messaggio di errore
       if((nomeRub[strlen(nomeRub)-1]=='t')&&
       (nomeRub[strlen(nomeRub)-2]=='x')&&
       (nomeRub[strlen(nomeRub)-3]=='t')&&
       (nomeRub[strlen(nomeRub)-4]=='.')){
            for (int i=0;i<40;i++)
                nomeRubrica[i]=nomeRub[i];
            return true;
            }
       else {
           cout<<"Errore nel settaggio del nome della rubrica.\n";
           cout<<"Probabilmente non e' stato aggiunto il suffisso '.txt'.\n";
           cout<<"Rubrica non creata o caricata.\n";
           return false;
           }
     }
     


const char*  Rubrica::getNomeRubrica()const{
       return nomeRubrica;
       }
          

bool Rubrica::getNext(ifstream& i,Elemento& el)const{
    //ritorno false se siamo alla fine del file o
    //incontro '\n'
    if((i.peek()=='\n')||(i.eof())){
       return false;
       }
     char tmp[40];
     i.getline(tmp,40,'\n');
     el.setNome(tmp);
     i.getline(tmp,40,'\n');
     el.setCognome(tmp);
     i.getline(tmp,40,'\n');
     el.setNumeroTelefono(tmp);
     return true;
     }

void Rubrica::print()const{
     cout<<"\nELENCO: "<<getNomeRubrica()<<"\n\n";
     ifstream i(getNomeRubrica(),ios::in);
     
     //caso file non apribile
     if(!i){
            cout<<"Errore nell'apertura del file.\n";
            cout<<"Il file potrebbe non esistere o essere vuoto.\n";
            return;
            }
            
     Elemento el;
     //getNext preleva gli elementi dall'ifstream 'i' uno alla volta
     //legandoli a 'el' e restituendo false se siamo alla fine del file
     while(getNext(i,el)){
         el.print();
         cout<<"\n";
         }
     }

bool Rubrica::inserisci(const char* nome, const char* cognome,const char* numTelefono){
      //controllo che non sia gia presente
      if(contiene(nome,cognome,numTelefono)){
         cout<<"Elemento gia' presente nella rubrica.\n";
         return false;
         }
         
      Elemento e(nome,cognome,numTelefono);
      cout<<"Inserimento di: \n";
      e.print();
      
      ofstream o(getNomeRubrica(),ios::app);
      o<<nome<<"\n"<<cognome<<"\n"<<numTelefono<<"\n";
      o.close();
      
      return true;
      
      }

bool Rubrica::contiene(const char* nome,const char* cognome,const char* numTelefono){
     ifstream i(getNomeRubrica(),ios::in);
     //caso in cui il file non puo essere aperto perchè
     //non esiste ancora
     if(!i){
            cout<<"File non apribile probabilmente perchè non esiste.\n";
            return false;
            }
     
     Elemento el;
     Elemento elDaInserire(nome,cognome,numTelefono);
     //getNext preleva gli elementi dall'ifstream 'i' uno alla volta
     //legandoli a 'el' e restituendo false se siamo alla fine del file
     while(getNext(i,el)){
          if(el==elDaInserire){
              return true;
           }
         }
     return false;
     }

int Rubrica::getElemento(Campo c,char* contenutoCampo,Elemento& el,int start){
    ifstream i(getNomeRubrica(),ios::in);
     //caso in cui il file non puo essere aperto perchè
     //non esiste ancora
     if(!i){
            cout<<"File non apribile perchè non esiste.\n";
            return false;
            }
     
     //salto 'start' righe
     char tmp[40];
     for(int k=1;k<start;k++)
         i.getline(tmp,40,'\n');
     
     int numRiga=start;
     //getNext preleva gli elementi dall'ifstream 'i' uno alla volta
     //legandoli a 'el' e restituendo false se siamo alla fine del file
     while(getNext(i,el)){
                //applico la ricerca in base al campo
                //specificato dall'utente
                //(nome, cognome o numero di telefono)
                switch (c){          
                          case campoNome:if(!strcmp(contenutoCampo,el.getNome()))
                                          return numRiga;
                                     break;
                           
                          case campoCognome:if(!strcmp(contenutoCampo,el.getCognome()))
                                          return numRiga;
                                       break;
                          
                          case campoNumeroTelefono:if(!strcmp(contenutoCampo,el.getNumeroTelefono()))
                                          return numRiga;
                                      break;
                          }
                          numRiga+=numeroCampiElemento;
                }
     return -1;
    }



void Rubrica::cancella(int numeroRiga ){
     ifstream i(getNomeRubrica(),ios::in);
     ofstream o("_tmp.txt",ios::out);
     
     //copio nel file _tmp.txt la prima parte della
     //rubrica (fino alla riga corrispondente all'elemento
     //da eliminare)
     char tmp[40];
     for(int k=1;k<numeroRiga;k++){
          i.getline(tmp,80,'\n');
          o<<tmp<<"\n";
          }
          
     //salto la copia delle righe corrispondenti 
     //all'elemento da eliminare della rubrica
     for(int k=0;k<numeroCampiElemento;k++)
          i.getline(tmp,80,'\n');
     
     //copio la parte rimanente della rubrica 
     //nel file _tmp.txt
     while(!(i.eof())){
            i.getline(tmp,80,'\n');
            o<<tmp<<"\n";
                      }
                      
     //chiudo _tmp.txt
     o.close();

     //copio il contenuto di _tmp.txt nella mia rubrica 
     ifstream in("_tmp.txt",ios::in);
     ofstream out(getNomeRubrica(),ios::out);
     copy(out,in);
     
     in.close();
     out.close();
     
     //elimino _tmp.txt
     system("del _tmp.txt");

    }
   
void Rubrica::copy(ofstream& out, ifstream& in){
     char tmp[40];
     in.getline(tmp,80,'\n');
     //pongo la condizione che nel caso in cui si incontri uno '\n' 
     //allora non si aggiunga più nulla allo stream out;
     //infatti se si incontra uno '\n' allora 
     //il getline metterà 0 in tmp e quindi la condizione
     //(tmp[0]!=0) sarà falsa---> si uscirà dal ciclo while
     while(tmp[0]!=0){
            out<<tmp<<"\n";
            in.getline(tmp,80,'\n');

                       }
     }
     
void Rubrica::modifica(Elemento& el,int numRiga,
            Campo campoPerInserimento,char* contenutoNuovo){
     //modifica dell'elemento
     switch (campoPerInserimento){
            case campoNome:el.setNome(contenutoNuovo);
                      break;
            case campoCognome:el.setCognome(contenutoNuovo);
                      break;
            case campoNumeroTelefono:el.setNumeroTelefono(contenutoNuovo);
                      break;
            }
            
     //eliminazione del vecchio elemento
     cancella(numRiga);
     
     //inserimento del nuoco elemento
     inserisci(el.getNome(),el.getCognome(),el.getNumeroTelefono());
     }     
     
    
