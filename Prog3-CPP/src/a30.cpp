/*
 * a30.cpp
 *
 *  Created on: 02.12.2013
 *      Author: Malcolm
 */
/*
#include <iostream>
#include <algorithm>
using namespace std;
int f1();

int a30() {

	f1();

	cin.peek();
return 0;
}


int n = 0;
bool vorz(int v) {
	cout << "v: "<< v << endl;
     if (v < 0) { n++; return false; }
	    return true;
}

int f1()
{
	int a[10]={3, 5, -8, 13, 21, 34, -55, 89, 144, 233};

	if (all_of(a, a+10, vorz))
		cout << n << ", +" << endl;
	else
		cout << n << ", -" << endl;

	return 0;
}



int f(void)
{
	int a[10]={3, 5, -8, 13, 21, 34, -55, 89, 144, 233};
	int n = 0;

	if (all_of(a, a+10, [&] (int v) -> bool {
		cout << "v: "<< v << endl;
		if (v < 0) { n++; return false; }
		    return true;
	}))
		cout << n << ", +" << endl;
	else
		cout << n << ", -" << endl;

	return 0;
}

*/
