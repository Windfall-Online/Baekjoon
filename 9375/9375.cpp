#include "bits/stdc++.h"
using namespace std;

string a, b; // equipment's name, part
int t; // testCase
int n; // clothes number
int main()
{
	cin >> t;
	while (t--)
	{
		map<string, int> m1;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> a >> b;
			m1[b]++;
		}
		long long int ret = 1; // total
		
		for (map<string, int>::iterator it = m1.begin(); it != m1.end(); ++it)
		{
			
			ret *= static_cast<long long>((it->second + 1));
		}
		ret--;
		cout << ret << endl;
	}
}

// 문제풀이 참고
// 모자가3개 상의가2개라고치면
// 3*2 = 6개의 조합의 경우가 나오는데
// 아무것도 안입는다의 조건도있어서 각각 1을 더해줘
// 4*3의 형태로 만들어야한다
// 근데 또 아예 알몸은 또 안된다하니 -1을 해준다

// 제품이름은 중요하지않다 착용 부위만 중요할분
// 그래서 입력은 둘 다 받되 착용부위만 int형 ++을 해준다
// map을 범위형태 for문으로썼을때는
// iterator로 받거나 pair형태로 받기