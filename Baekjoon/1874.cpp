#include <iostream>
#include <stack>
using namespace std;

// test case
int n;
// input number
int x;
// biggest number in stack
int m;
stack<int> s1;
string ans;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	
	while (n--)
	{
		cin >> x;
		if (x > m)
		{
			while (x > m)
			{
				s1.push(++m);
				ans += '+';
			}
			s1.pop();
			ans += '-';
		}
		else
		{
			bool found = false;
			if (!s1.empty())
			{
				int top = s1.top();
				s1.pop();
				ans += '-';
				if (x == top)
				{
					found = true;
				}
			}
			if (!found)
			{
				cout << "NO";
				exit(0);
			}
		}
	}
	for (char x : ans)
	{
		cout << x << "\n";
	}
	
}

