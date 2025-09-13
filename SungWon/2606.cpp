#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> network;
vector<bool> vst;
// n = 컴퓨터 개수, c = 연결 개수
int n, c;

int dfs(int u)
{
    int cnt = 1;
    vst[u] = true;
    for (int v : network[u])
    {
        if (!vst[v])
            cnt += dfs(v);
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // n = 컴퓨터 개수, c = 연결 개수
    cin >> n >> c;
    network.assign(n + 1, {});
    vst.assign(n + 1, false);
    for (int i = 0; i < c; i++)
    {
        int a, b;
        cin >> a >> b;
        // a컴퓨터와 b 컴퓨터 연결
        network[a].push_back(b);
        network[b].push_back(a);
    }
    int ans = dfs(1) - 1;
    cout << ans;
    return 0;
}