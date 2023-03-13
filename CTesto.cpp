#include "CTesto.h"

CTesto::CTesto()
{

}

string CTesto::Orologio()
{
	time_t currentTime;
	time(&currentTime);
	asctime(localtime(&currentTime));
	//cout << asctime(localtime(&currentTime)) << endl;
	cout << endl << endl << endl << endl;
	return "Orario, Data e Anno sono stati scritti nel file\n\n\n\n\n";
}

string CTesto::scriviIn()
{
	time_t currentTime;
	time(&currentTime);
	///////////////////////////////////////////////////////
	
	string var = ""; //qui ci sarà il fattoriale in variabile var stringa

	//////////////////////////////////////////////////////
	cout << "Inserire qui il testo da scrivere nel file> ";
	cout << endl << endl << endl << endl;
	cin >> var;
	//ofstream fout("prova.txt"); //lo cerca in directory del progetto se non viene specificato il percorso, se non esiste lo crea
	ofstream fout("prova.txt", ios::app);
	ofstream foutempo("prova.txt", ios::app);

	foutempo << "\n" << asctime(localtime(&currentTime)) << endl;
	fout << var;
	fout << endl << endl;

	fout.close();
	foutempo.close();
	cout << endl << endl << endl << endl;
	return "Il testo e' stato scritto nel file";
}
