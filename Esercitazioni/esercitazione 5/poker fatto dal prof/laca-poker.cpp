// Fig. 5.24: fig05_24.cpp (MODIFICATO)
// Card shuffling dealing program
#include <iostream>
using std::cout;

#include <iomanip>
using std::ios;
using std::endl;
using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

// Tipo enumerativo ritornato dalla funzione deal col risultato della mano
enum Gioco {NIENTE, COPPIA, DOPPIA, TRIS, SCALA, COLORE, FULL, POKER, SCALAREALE};

void shuffle( int [][ 13 ] );

// Funzione che prende 5 carte dal mazzo e ritorna il gioco ottenuto
Gioco deal( const int [][ 13 ], const char *[], const char *[], short start );

// Funzioni utilizzate da deal per determinare il gioco
int multiplicity(int [], int);
void bsort(int [], int);


int main()
{
	const char *suit[ 4 ] =  
		{ "Hearts", "Diamonds", "Clubs", "Spades" };
	const char *face[ 13 ] = 
		{ "Ace", "Deuce", "Three", "Four",
		"Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };
	int deck[ 4 ][ 13 ] = { 0 };

	srand( time( 0 ) );
	shuffle( deck );

	// Genera le due mani per i due giocatori e memorizza nelle
	// variabili ris1 e ris2 il risulatato.
	Gioco ris1 = deal(deck, face, suit, 0);
	Gioco ris2 = deal(deck, face, suit, 5);

	// Stampa il vincitore
	if(ris1 == ris2) {
		cout << "Parita'" << endl;
	} else {
		cout << "Vince giocatore " << (ris1>ris2 ? "1" : "2") << endl;
	}
	system("pause");
	return 0;
}

void shuffle( int wDeck[][ 13 ] )
{
	int row, column;

	for ( row = 0; row <= 3; row++ )
		for ( column = 0; column <= 12; column++ ) 
			wDeck[ row ][ column ] = 0;

	for ( int card = 1; card <= 52; card++ ) {
		do {
		row = rand() % 4;
		column = rand() % 13;
		} while( wDeck[ row ][ column ] != 0 );

		wDeck[ row ][ column ] = card;
	}
}

// E' stato aggiunto il parametro start che indica a che punto del mazzo
// cominciare a prendere le carte (0 per il primo giocatore, 5 per il secondo).
Gioco deal( const int wDeck[][ 13 ], const char *wFace[], const char *wSuit[], short start )
{
	// Array in cui memorizzare numero e seme delle cinque carte
	int dFace[5];
	int dSuit[5];

	for ( int card = 1; card <=5; card++ ){
		for ( int row = 0; row <= 3; row++ ){
			for ( int column = 0; column <= 12; column++ ) {
				if ( wDeck[ row ][ column ] == card+start ) {
					cout << setw( 5 ) << setiosflags( ios::right )
						<< wFace[ column ] << " of "
						<< setw( 8 ) << setiosflags( ios::left )
						<< wSuit[ row ] << endl;
					dFace[card-1]=column;
					dSuit[card-1]=row;
				}
			}
		}
	}

	// Determina se c'e' un colore
	bool colore = true;
	for(int i=1; i<5; i++) {
		if(dSuit[i]!=dSuit[0]) {
			colore = false;
			break;
		}
	}

	// Determina se c'e' una scala
	bsort(dFace, 5);
	bool scala = true;
	for(int i=1; i<5; i++) {
		if((dFace[i]-dFace[i-1]) != 1) {
			scala = false;
			break;
		}
	}

	// Stampa il risultato e ritorna il codice nel caso di scala o colore
	if (colore && scala) {
		cout << "SCALA REALE" << endl;
		return SCALAREALE;
	} else if(colore) {
		cout << "COLORE" << endl;
		return COLORE;
	} else if(scala) {
		cout << "SCALA" << endl;
		return SCALA;
	} else {
		// Determina se c'e' coppia, doppia coppia, tris, full o poker
		// in base alla somma delle molteplicita' delle carte
		int tot = 0;
		for(int i=0; i<5; i++) {
			tot += multiplicity(dFace, i);
		}
		switch(tot) {
		case 5:
			cout << "NIENTE" << endl;
			return NIENTE;
		case 7:
			cout << "COPPIA" << endl;
			return COPPIA;
		case 9:
			cout << "DOPPIA COPPIA" << endl;
			return DOPPIA;
		case 11:
			cout << "TRIS" << endl;
			return TRIS;
		case 13:
			cout << "FULL" << endl;
			return FULL;
		case 17:
			cout << "POKER" << endl;
			return POKER;
		default:
			// Conviene sempre controllare la condizione di default
			cout << "errore imprevisto" << endl;
			return NIENTE;
		}
	}
}

// Ritorna il numero di volte che l'elemento k del vettore e' ripetuto
// nel vettore dF di 5 interi
int multiplicity(int dF[], int k) {
	int tot=0;
	for(int i=0; i<5; i++)
		if((dF[i] == dF[k]))
			tot++;
	return tot;
}

// Effettua l'ordinamento a bolle di un vettore di k interi
void bsort(int dF[], int k) {
	int tmp;
	for(int j=0; j<k; j++)
		for(int i=1; i<k; i++)
			if((dF[i] < dF[i-1])) {
				tmp = dF[i];
				dF[i] = dF[i-1];
				dF[i-1] = tmp;
			}
}

