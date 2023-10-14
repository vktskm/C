//Il programma usa dei double per indicare una singola carta: 
//la parte intera indica il VALORE della carta; 
//la mantissa indica il SEME.
//Il valore va da 7 a 14 (14 = asso); il seme va da 0 a 3.

//scala dei punteggi (dal pi� basso al pi� alto)
enum Punteggio {nulla,coppia,doppia_coppia,tris,scala,full,colore,poker,scala_reale};

//d� le carte per la prima mano; giocatori[][5] � un 
//vettore che racchiude tutti i giocatori (ogni riga di tale vettore 
//rappresenta un giocatore e contiene 5 carte)
void daiCartePrimaMano(double giocatori[][5],const int numGiocatori);

//visualizza le carte di tutti i giocatori
void displayCarteTutti(const double giocatori[][5],const int numGiocatori);

//visualizza le carte di un singolo giocatore
void displayCarte(const double giocatore[]);

//restituisce il punteggio delle carte di un giocatore
Punteggio getPunteggio(const double giocatore[]);

//ordina in senso crescente, secondo il valore del double
//che rappresenta una carta, le carte di un singolo giocatore (la 
//funzione viene chiamata quando vengono distribuite le carte)
void ordina(double giocatore[]);

//visualizza il punteggio (es.: se punteggio � 3 allora viene stampato
//a video la stringa "tris")
void displayPunteggio(Punteggio p);

//restituisce il numero identificativo del giocatore 
//con il miglior punteggio (tale numero � un indice del vettore 
//di giocatori pi� 1, mentre l'uscita 0 indica parit�)
int getGiocatoreMigliorPunteggio(const double giocatori[][5],const int numGiocatori);

//Il programma usa dei double per indicare una singola carta: 
//la parte intera indica il valore della carta; la mantissa indica il seme.
//Il valore va da 7 a 14 (14 = asso); il seme va da 0 a 3.
//getSeme restituisce il seme a partire dal double che rappresenta 
//una carta.
int getSeme(const double carta);

//getCarta restituisce il valore della carta a partire da un double
int getValore(const double carta);

//seleziona per le variabili "seme" e "valore" 
//i valori tali da identificare la carta successiva.
//La funzione � richiamata da inizializzaMazzo.
//Esempio1: la carta successiva alla carta rappresentata 
//dal valore 10.2 � 10.3;
//Esempio2: la carta successiva alla carta rappresentata 
//dal valore 14.3 � 7.0 (le carte formano un ciclo chiuso);
void setNextSemeValore(double* seme,double* valore);

//d� le probabilit� di uscita dei punteggi mettendoli 
//nel vettore statico "probabilita" (che � un vettore lungo 9 
//poich� ci sono
//9 possibili punteggi che si possono fare, compreso il punteggio nullo 
//e il full; vedi i punteggi nella enum, sopra). Il numero delle mani 
//di carte (cio� delle distribuzioni di carte)� numMani.
void setProbabilita(int numMani);

//inizializza il mazzo (mischia le carte :D)
void inizializzaMazzo();

//d� le carte per la seconda mano per un singolo giocatore; 
//gli argomenti sono la matrice 
//dei giocatori, l'id del giocatore che deve cambiare le carte (che 
//sarebbe il numero della riga della matrice) e infine il vettore
// 'carteDaCambiare' (un vettore di bool lungo 5: ogni casella indica se
//la corrispondente carta deve essere cambiata).
//Es.: se carteDaCambiare[0]==true allora la prima carta � da cambiare.
//Es.: se carteDaCambiare[i]==true allora la carta i+1 � da cambiare.
void daiCarteSecondaManoSingoloGiocatore(double giocatori[],bool carteDaCambiare[]);

//d� le carte per la seconda mano a tutti i giocatori
void daiCarteSecondaMano(double giocatori[][5],const int numGiocatori,bool carteDaCambiare[][5]);

//la seguente funzione estrae una nuova carta dal mazzo, 
//tenendo conto delle carte che sono gi� uscite usando
//il vettore carteUscite.
double getNewCarta();

//il seguente metodo permette al computer di giocare per il 'giocatore'
//passato per argomento. Il vettore 'giocatore' � lungo 5 (poich� 
//un giostore ha 5 carte), mentre il vettore 'carteDaCambiare'
//� un vettore di bool lungo 5 i cui indici posti a true 
//indicano le carte da cambiare per quel giocatore.  
//Il computer decidera quali carte conviene cambiare tenendo conto
//del punteggio che si trova davanti o del punteggio pi� probabile
//verso il quale le carte si avvicinano (si considerano anche casi come
//colore mancato o scala mancata).
void giocaComputer(double giocatore[], bool carteDaCambiare[]);

//d� al computer le istruzioni da eseguire nel caso in cui si trovasse
//in mano un tris (gli dice quali carte cambiare)
void giocaTris(const double giocatore[],bool carteDaCambiare[]);

//d� al computer le istruzioni da eseguire nel caso in cui si trovasse
//in mano una doppia coppia (gli dice quali carte cambiare)
void giocaDoppiaCoppia(const double giocatore[],bool carteDaCambiare[]);

//d� al computer le istruzioni da eseguire nel caso in cui si trovasse
//in mano una coppia (gli dice quali carte cambiare)
void giocaCoppia(const double giocatore[],bool carteDaCambiare[]);


//d� al computer le istruzioni da eseguire nel caso in cui si trovasse
//in mano un colore mancato per una carta o una scala mancata per una carta;
//in tal caso verrebbero effettuate le relative modifiche al vettore
//'carteDaCambiare' 
//In questa funzione viene anche contemplato il caso 
//in cui ci fosse solo una semplice coppia.
void giocaPuntiMancati(Punteggio punt,double giocatore[],bool carteDaCambiare[]);

//ordina le carte secondo il colore (utile per 
//individuare un colore mancato)
void ordinaSecondoIlColore(double giocatore[]);

//stampa a video il valore e il seme della carta rappresentata dal 
//double 'carta'
void displayCarta(const double carta);

