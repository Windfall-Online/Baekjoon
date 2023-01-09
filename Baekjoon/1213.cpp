#include "bits/stdc++.h"
using namespace std;


// 팰린드롬
// 알파벳이 홀수로 2종류이상이면 못만듬

// AAABB로 ABABA를 만들려면
// AB까지 만들고 A출력하고 AB를 뒤집어서 가자

string str;     // 입력받을 문자
string oddStr;  // 홀수개수 문자
string evenStr; // 짝수개수 문자


int cnt[200]; // 알파벳 개수 


int main()
{
	cin >> str;
	// 알파벳 갯수 측정
	for (char a : str)
	{
		cnt[a]++;
	}
	for (int i = 'A'; i <= 'Z'; ++i)
	{
		// 일단 / 2 를해서 3개여도 1개는 들어가게
		for (int j = 0; j < cnt[i] / 2; ++j)
		{
			evenStr += i;
		}
		// 홀수인건 따로 관리
		if (cnt[i] & 1)
		{
			oddStr += i;
		}

	}
	if (oddStr.size() > 1)
	{
		cout << "I'm Sorry Hansoo";
	}
	else
	{
		cout << evenStr;
		cout << oddStr;
		reverse(evenStr.begin(), evenStr.end());
		cout << evenStr;
	}
}

