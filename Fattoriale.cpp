#include "Fattoriale.h"
#include <iostream>
#include <string>
using namespace std;

#define MAXEL 100

Fattoriale::Fattoriale()
{
}

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


cpp_int Fattoriale::Calcolo()//fatto con libreria> boost
{

	int numero = 0;
	cout << "Inserire numero: " << endl;
	cin >> numero;
	
	start();
	
	cpp_int fattoriale = 1;

	for (int i = 1; i <= numero; i++) 
	{
		fattoriale *= i;
		//cout << time << endl; esce in hex lol
	}

	/*cout << "\nFattoriale di > " << numero << ": " << fattoriale << endl;
	cout << "\nNote: puoi fare CTRL + C" << endl;*/
	
	return fattoriale;
}

cpp_int Fattoriale::Scrivifatt()
{

    cpp_int ret = Calcolo();
	cout << "***************FATTORIALE*****************>>>>" << endl;
	cout << ret;

	ofstream fout("fattoriali.txt", ios::app);

	fout << ret;
	fout << endl << endl;
	fout.close();
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
