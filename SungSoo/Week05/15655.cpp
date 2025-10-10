#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> v;
vector<int> p;

void dfs(int s){
	
	 if ((int)p.size() == m) {
        for (int i = 0; i < m; ++i) {
            if (i) cout << " ";
            cout << p[i];
        }
        cout << "\n";
        return;
    }
    for (int i = s; i < n; ++i) {
        p.push_back(v[i]);
        dfs(i + 1);
        p.pop_back();
    }
	
	return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;	


	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	
	dfs(0);
    return 0;
}
