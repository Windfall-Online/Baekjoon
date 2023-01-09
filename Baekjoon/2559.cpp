#include <iostream>
#include "bits/stdc++.h"
using namespace std;

// 맨 마지막은 더하지 않는것이 핵심?
// 시간 초과?

int preSum[100001];
int n;
int k;
int temp;
int ret = -10000004;

int main()
{

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		cin >> temp;
		preSum[i] = preSum[i - 1] + temp;
	}
	for (int i = 1; i <= n; ++i)
	{
		cout << preSum[i] << " ";
	}
	cout << endl;
	for (int i = k; i <= n; ++i)
	{	
		cout << preSum[i] << " " << preSum[i - k] << " " << preSum[i] - preSum[i - k] << "      ";
		ret = max(ret, preSum[i] - preSum[i - k]);
	}
	



	
}

