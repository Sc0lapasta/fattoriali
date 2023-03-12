#include "Fattoriale.h"

int main()
{
	//in pratica > aspetta 5 secondi, poi esegue il resto (timer che quando finisce fa partire roba dopo)
	//quasi inutile
	//FATTO CON  <chrono>

	/*chrono::seconds five_seconds = chrono::seconds(5);
	this_thread::sleep_for(five_seconds);
	Fattoriale asd = Fattoriale();*/
	
	//asd.Calcolo(); //non dovrebbe funzionare ma funziona
	//asd.tempo();
	//cout << asd.getFattoriale();

	//FATTO CON <time.h>:
	//asd.start();
	//asd.stop();
	//quello che mi serve...

	Fattoriale asd = Fattoriale();

	
	asd.Calcolo();

	asd.stop();
	cout << "\nTempo trascorso in secondi: " << asd.scriviCron() << "\n\n\n\n\n\n\n";

	return 0;
}