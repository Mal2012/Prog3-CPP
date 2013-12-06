/*
 * a35.cpp
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

namespace myLib
{
static long m = 32768;
static long b = 9757;
static long c = 6925;


long rand(){

	static int n = (int) (time(0)%m);
	n = (int)((n * b + c) % m);
	return n;
}

double randDouble()
{
	return (double)rand() / m;
}
}

using namespace myLib;

int a35()
{
	cout << "*** Zufallszahlenerzeugung *** " << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << setw(15) << myLib::rand();
		if (i % 5 == 0)
			cout << endl;
	}
	cout << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << setw(15) << myLib::randDouble();
		if (i % 5 == 0)
			cout << endl;
	}
	cout << endl;

	cin.peek();
	return 0;
}
