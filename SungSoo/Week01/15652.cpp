#include <bits/stdc++.h>
using namespace std;

int n, m;
int s[8];

void dfs(int depth, int start){
	if(depth == m){
		for(int i = 0; i < m; i++) cout << s[i] << ' ';
      	  cout << '\n';
      	  return;
	}
	 for(int i = start; i <= n; i++) {
        s[depth] = i;
        dfs(depth + 1, i);
    }
	
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;
	dfs(0,1);
	
    return 0;
}
