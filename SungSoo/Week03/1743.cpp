#include <bits/stdc++.h>
using namespace std;

int a[104][104];
int visited[104][104];

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int n, m, k;
int rst;

int bfs(int sy, int sx){
	
	int cnt = 1;
	
	visited[sy][sx] = 1;
	queue<pair<int,int>> q;
	q.push({sy,sx});
	
	while(!q.empty()){
			
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		for(int i=0;i<4;i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(visited[ny][nx] || a[ny][nx]==0) continue; 
			
				q.push({ny,nx});
				visited[ny][nx] = 1;
				cnt++;
		}
	}
	return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m >> k;
	
	for(int i=0;i<k;i++){
		int r,c;
		cin >> r >> c;
		a[r-1][c-1] = 1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j] == 0 && a[i][j])rst = max(rst,bfs(i,j));
		}
	}
	
	cout << rst;
	
    return 0;
}
