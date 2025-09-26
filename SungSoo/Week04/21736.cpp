#include <bits/stdc++.h>
using namespace std;

int n,m;
char a[604][604];
bool visited[604][604];
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
int rst;
int q,w;

void dfs(int y, int x){
	
	if(a[y][x] == 'P') rst++;
	
	visited[y][x] = true;
	
	for(int i=0;i<4;i++){
		
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if(a[ny][nx] == 'X') continue;
		if(visited[ny][nx]==true) continue;
		dfs(ny,nx);
	}
	
	return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char k;
			cin >> k;
			a[i][j] = k;
			if(k=='I') {
				q = i;
				w = j;
			}
		}
	}
	
	dfs(q,w);
	if(rst == 0) cout << "TT";
	else cout << rst;
	
    return 0;
}
