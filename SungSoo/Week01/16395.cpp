#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30][30];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
        for (int j = 1; j < i; j++) a[i][j] = a[i-1][j-1] + a[i-1][j];
        a[i][i] = 1;
    }

    cout << a[n-1][k-1] << '\n';
    return 0;
}
