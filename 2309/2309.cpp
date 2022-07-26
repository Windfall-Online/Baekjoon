#include <iostream>
#include "bits/stdc++.h"
using namespace std;


const int BUF_SIZE = 9;

int dwarfHeights[BUF_SIZE];

int main()
{
    for (int i = 0; i < 9; ++i)
        cin >> dwarfHeights[i];

    sort(dwarfHeights, dwarfHeights + BUF_SIZE);

    while (next_permutation(dwarfHeights, dwarfHeights + BUF_SIZE))
    {
        int sum = 0;
        for (int i = 0; i < 7; ++i)
            sum += dwarfHeights[i];
       
        if (sum == 100)
            break;
    }
    for (int i = 0; i < 7; ++i)
        cout << dwarfHeights[i] << endl;
    
}

