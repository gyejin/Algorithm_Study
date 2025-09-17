#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> graph;
vector<bool> vst;

void dfs(int u)
{
    if (!vst[u])
        vst[u] = true;
    for (auto v : graph[u])
    {
        if (!vst[v])
            dfs(v);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 정점의 개수 n, 간선의 개수 m
    int n, m;
    cin >> n >> m;
    graph.assign(n + 1, {});
    vst.assign(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vst[i])
        {
            dfs(i);
            ans++;
        }
    }
    cout << ans;
    return 0;
}