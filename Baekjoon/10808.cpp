#include "bits/stdc++.h"
using namespace std;

string str;
const int BUF_SIZE = 26;
int cnt[BUF_SIZE];


int main()
{

    cin >> str;

    for (char a : str)
    {
        cnt[a - 'a']++;
    }
    for (int i = 0; i < 26; ++i)
        cout << cnt[i] << " ";
    
}

