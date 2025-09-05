#include <bits/stdc++.h>
using namespace std;

int n, m;
int a, b;
bool visited[2004];
vector<int> v[2004];
bool found = false;


void dfs(int k, int depth){
	if(depth==5){
		found = true;
		return;
	}
	
	visited[k] = true;
	for(int u : v[k]){
		if(!visited[u]) dfs(u,depth +1);
	}
	visited[k] = false; // 백트래킹 
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	cin >> n >> m;

	
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for (int i = 0; i < n; i++) {
        dfs(i, 1);
        if (found) break;
    }

    cout << (found ? 1 : 0);
	
    return 0;
}
