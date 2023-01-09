#include "bits/stdc++.h"
using namespace std;

int n;
int m;
string str;
// 각각 포켓몬 : 번호
// 번호 : 포멧몬 맵을 2개만들고 그에 따라 매치를 해줌
map<int, string> map1;
map<string, int> map2;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> str;
		map1[i] = str;
		map2[str] = i;
	}
	// atoi()함수를 이용해서
	// 이 문자를 int로 반환할 수 있는 지 없는지
	// 문자를 int로 반환 못하면 0이 리턴되는데
	// 그러면? map1[str]에 해당하는 번호를 쏘면되고
	// int로 변환이 되면?
	// map2[i]에 해당하는 포켓몬 이름을 쏘면 된다!!

	for (int i = 0; i < m; ++i)
	{
		cin >> str;
		// can casting to int?
		if (atoi(str.c_str()) == 0)
		{
			// cant
			cout << map2[str] << "\n";
		}
		else
		{
			// can casting to int
			cout << map1[atoi(str.c_str())] << "\n";
		}
	}

	

}
