#include "bits/stdc++.h"    
using namespace std;

int N;
int ret;
string str;

// 핵심 : 스택에 넣으면서 계속 top과 비교하면서 같으면 안넣고 있던걸 pop하기

int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> str;
		stack<char> stk;
		for (char a : str)
		{
			// 스택이 사이즈가 있는지 체크해야함
			if ((stk.size() && (stk.top() == a)))
				stk.pop();
			else
				stk.push(a);
		}
		if (stk.size() == 0)
			ret++;
	}

	cout << ret;
}

