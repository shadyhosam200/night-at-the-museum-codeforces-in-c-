#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{      string s ;
cin >> s ;
int len=s.length();
int moves=0 ;
int start=0;

for (int i=0 ; i<len ; i++)
{

    int index = s[i] - 97 ; // to make the base = a .
    int walk = abs(start-index);
    if (walk>13)
    {
        moves+=26-walk;

    }
    else
    {
        moves+=walk;

    }

    start = index ;

}
cout << moves;

}



