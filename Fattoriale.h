#pragma once
#include <string>
#include <iostream>
//#include "\boost_1_81_0\boost\multiprecision\cpp_int.hpp"
#include "C:\Users\Sc0lapasta\Desktop\Boost\boost_1_81_0\boost\multiprecision\cpp_int.hpp"
#include <chrono>
#include <thread>
#include <time.h>
#include <fstream>
#include <ctime>
//#include <unistd.h> non funziona, tanto era solo per sleep();
using namespace std;
using namespace boost::multiprecision;



class Fattoriale
{
private:
	int ti, tf;
public:
	void start();
	void stop();
	int scriviCron();
	Fattoriale();
	cpp_int Calcolo();
	cpp_int Scrivifatt();
	//string globale; non puoi
};

