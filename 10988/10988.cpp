﻿#include "bits/stdc++.h"
using namespace std;

string str;
string temp;

int main()
{
	cin >> str;
	temp = str;
	reverse(temp.begin(), temp.end());
	
	if (str == temp)
		cout << "1";
	else
		cout << "0";
}

