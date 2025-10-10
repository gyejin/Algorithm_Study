#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; ++tc)
    {
        bool ok = true;
        stack<char> st;
        string s;
        cin >> s;

        for (char ch : s)
        {
            if (ch == '(')
            {
                st.push('(');
            }
            else if (ch == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }

        if (ok && st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
