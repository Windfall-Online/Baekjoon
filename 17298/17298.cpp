﻿#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	vector<int> a(n);
    vector<int> ans(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	stack<int> s;
	for (int i = 0; i < n; ++i)
	{
		while (!s.empty() && a[s.top()] < a[i])
		{
			ans[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty())
	{
		ans[s.top()] = - 1;
		s.pop();
	}
	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << ' ';
	}
}
