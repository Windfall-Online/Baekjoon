#include "bits/stdc++.h"
using namespace std;

int n;
int pos;
string str;
string pattern;
string pre;
string suf;


int main()
{
	cin >> n;
	cin >> pattern;
	pos = pattern.find('*');
	pre = pattern.substr(0, pos);
	suf = pattern.substr(pos + 1);

	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		if (pre.size() + suf.size() > str.size())
		{
			cout << "NE" << endl;
		}
		else
		{
			if (str.substr(0, pre.size()) == pre && suf == str.substr(str.size() - suf.size()))
				cout << "DA" << endl;
			else
				cout << "NE" << endl;
		}
	}






}

