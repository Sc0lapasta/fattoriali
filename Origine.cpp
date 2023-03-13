#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "CTesto.h"
#include "Fattoriale.h"
using namespace std;



int main() //programma per scrivere in un file, con orologio data, ora e anno
{
	Fattoriale asda = Fattoriale();
	asda.Calcolo();
	asda.stop();
	asda.Scrivifatt();
	cout << "\nTempo trascorso in secondi: " << asda.scriviCron() << "\n\n\n\n\n\n\n";

	CTesto asd = CTesto();

	cout << asd.Orologio(); //scrivi ora, data e anno
	cout << asd.scriviIn(); //scrivi stringa in cin
	return 0;
}
