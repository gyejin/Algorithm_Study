#include <bits/stdc++.h>
using namespace std;

int n;
long long s[10], b[10];
long long rst = LLONG_MAX;

void dfs(int idx, long long prodS, long long sumB, bool picked) {
    if (idx == n) {
        if (picked) rst = min(rst, llabs(prodS - sumB));
        return;
    }

    dfs(idx + 1, prodS * s[idx], sumB + b[idx], true);
    dfs(idx + 1, prodS, sumB, picked);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i] >> b[i];

    dfs(0, 1LL, 0LL, false);
    cout << rst << '\n';
    return 0;
}
