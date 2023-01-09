#include <iostream>
#include <stack>
using namespace std;

// ()괄호가 인접하면 레이저
// 아니면 막대기

// 막대기가 계속 가다가 레이저를 만나면
// 막대 개수만큼 조각이 생긴다!

// 레이저를 몇번 만나고나서 ')'가오면 이미 진행되던 막대기가
// 이제 끝난다는 것이니 끝나면서 조각 1개가 추가된다

// ')'를 만났는데 바로전 인덱스가'('이면 레이저이므로 
// 팝시키고 조각개수를 추가한다

// 스택에 '('가아닌 인덱스를 넣는게 편함


string str;
stack<int> st;
int result;
int main()
{
    cin >> str;
    int _size = str.size();
    for (int i = 0; i < _size; ++i)
    {
        if (str[i] == '(')
        {
            st.push(i);
        }
        else
        {
            // 스택에 들어가있는 가장 마지막 인덱스와
            // 지금 넣으려는 인덱스를비교
            if (st.top() + 1 == i)
            {
                st.pop();
                result += st.size();
            }
            else
            {
                st.pop();
                result += 1;
            }
        }
    }
    cout << result;
}
