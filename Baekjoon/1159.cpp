#include "bits/stdc++.h"
using namespace std;



int alpha[26];
string str;
string ret;
int cnt;

int main()
{
	cin >> cnt;
	for (int i = 0; i < cnt; ++i)
	{
		cin >> str;
		alpha[str[0] - 'a']++;
	}

	for (int i = 0; i < 26; ++i)
	{
		if(alpha[i] >= 5)
			ret += i + 'a';

	}
	// ret문자열이 존재하면
	if (ret.size())
	{
		cout << ret;
	}
	else
	{
		cout << "PREDAJA";
	}
}

