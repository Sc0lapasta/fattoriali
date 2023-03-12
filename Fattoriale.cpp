#include "Fattoriale.h"
#include <iostream>
#include <string>
using namespace std;

#define MAXEL 100

void Fattoriale::start()
{
	ti = time(0);
	tf = 0;
}

void Fattoriale::stop()
{
	tf = time(0);
}

int Fattoriale::scriviCron()
{
	if (tf == 0) 
		return time(0) - ti;
	else 
		return tf - ti;
}

Fattoriale::Fattoriale()
{
}

string Fattoriale::getSommaTot()
{
	//da fare: copia incolla diventa array
	int numEl = 0; 
	//per adesso = 15511210043330985984000000 return in questo caso == 72

	cout << "Inserire numero elementi> " << endl;
	cin >> numEl;

	int v[MAXEL];
	int j = 0;
	int somma = 0;

	//chiede
	for (size_t i = 0; i < numEl; i++) {
		cout << "asd: " << endl;
		cin >> v[i];
		j++;
		cout << "Contatore: " << j << endl;
	}

	//scrive
	for (size_t i = 0; i < numEl; i++) {
		cout << "Numero > " << v[i];
		somma += v[i];
	}

	return "\n\n\n\n\Somma totale> " + to_string(somma);
}

int Fattoriale::Calcolo()//fatto con libreria> boost
{

	int numero = 0;
	cout << "Inserire numero: " << endl;
	cin >> numero;
	start();

	cpp_int fattoriale = 1;

	for (int i = 1; i <= numero; i++) 
	{
		fattoriale *= i;
	}

	cout << "\nFattoriale di > " << numero << ": " << fattoriale << endl;
	cout << "\nNote: puoi fare CTRL + C";

	return 0;
}

//int Fattoriale::tempo()
//{
//	auto start = chrono::steady_clock::now();
//
//	// fai delle cose qui
//	//sleep(3);
//
//	auto end = chrono::steady_clock::now();
//
//	cout << "Elapsed time in nanoseconds: "
//		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
//		<< " ns" << endl;
//
//	cout << "Elapsed time in microseconds: "
//		<< chrono::duration_cast<chrono::microseconds>(end - start).count()
//		<< " µs" << endl;
//
//	cout << "Elapsed time in milliseconds: "
//		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
//		<< " ms" << endl;
//
//	cout << "Elapsed time in seconds: "
//		<< chrono::duration_cast<chrono::seconds>(end - start).count()
//		<< " sec";
//	return 0;
//}
