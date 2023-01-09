#include "bits/stdc++.h"
using namespace std;


int numArr[15001];
int first;
int last;
int N;
int M;
int tempNum;
int cnt;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M;
	last = N - 1;
	for (int i = 0; i < N; ++i)
	{
		cin >> tempNum;
		numArr[i] = tempNum;
	}
	sort(numArr, numArr + N);
	while (first < last)
	{
		if ((numArr[first] + numArr[last]) < M)
			first++;
		else if ((numArr[first] + numArr[last]) > M)
			last--;
		else if ((numArr[first] + numArr[last]) == M)
		{
			cnt++;
			first++;
			last--;
		}
	}
	cout << cnt;

}

