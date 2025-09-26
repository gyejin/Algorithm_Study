#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> weight(N + 1);
    vector<int> value(N + 1);
    vector<int> dp(K + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> weight[i] >> value[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int w = K; w >= weight[i]; w--) {
            dp[w] = max(dp[w], dp[w - weight[i]] + value[i]);
        }
    }

    cout << dp[K] << '\n';
    return 0;
}
