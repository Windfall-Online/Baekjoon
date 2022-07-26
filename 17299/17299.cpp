#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int numberCount[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    vector<int> inputNumber(testCase);
    vector<int> ans(testCase);
    for (int i = 0; i < testCase; i++) {
        cin >> inputNumber[i];
        numberCount[inputNumber[i]] += 1;
    }
    stack<int> s;
    s.push(0);
    for (int i = 1; i < testCase; i++) {
        if (s.empty()) {
            s.push(i);
        }
        while (!s.empty() && numberCount[inputNumber[s.top()]] < numberCount[inputNumber[i]]) {
            ans[s.top()] = inputNumber[i];
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) {
        ans[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < testCase; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}