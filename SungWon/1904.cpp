#include <iostream>
#include <vector>
using namespace std;
/*
(n->rst)
1 -> 1
2 -> 2
3 -> 3
4 -> 5
규칙 -> 피보나치와 동일함
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }
    cout << dp[n];
    return 0;
}
