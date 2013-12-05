/*
 * a34.cpp
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */

#include <iostream>
using namespace std;

string s2;

string& strToUpper(const string& s1)
{
s2= " ";

for(int i = 0; i < s1.length(); i++)

s2+= toupper(s1[i]);

return s2;

}

string strToUpper2(const string& s1)
{

string s3;
s3= " ";

for(int i = 0; i < s1.length(); i++)

s3+= toupper(s1[i]);

return s3;

}

int a34()
{
    string s = "abcdefg";
    string t = "hijklmn";

    cout << s << " -> " << strToUpper(s) << endl;
    cout << t << " -> " << strToUpper(t) << endl;

    cin.peek();
    return 0;
}
