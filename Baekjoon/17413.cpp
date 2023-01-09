#include <iostream>
#include <stack>
#include <string>
using namespace std;
// 뒤집는 문제 : 스택을 써보자
// 태그는 안뒤집음
// 공백은 그자리 그대로 출력

// input
string str;
stack<char> st;

void PrintAll(stack<char>& st)
{
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
}

int main()
{
	getline(cin, str);
	bool isTag = false;
	for (char a : str)
	{
		if (a == '<')
		{
			isTag = true;
			PrintAll(st);
			cout << a;
		}
		else if (a == '>')
		{
			isTag = false;
			cout << a;
		}
		if (isTag)
		{
			cout << a;
		}
		else
		{
			// 공백을 만나면 다 뒤집은걸 출력하고 공백 찍기
			if (a == ' ')
			{
				PrintAll(st);
				cout << a;
			}
			else
			{
				st.push(a);
			}

		}
	}
}

