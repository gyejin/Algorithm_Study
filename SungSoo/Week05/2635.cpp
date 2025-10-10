#include <bits/stdc++.h>
using namespace std;

int n;
int s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	vector<int> rst;
	
	for(int i=1;i<=n;i++){
		vector<int> v;
		v.push_back(n);
		v.push_back(i);
		while(v[v.size()-2] - v[v.size()-1] >= 0){
			v.push_back(v[v.size()-2] - v[v.size()-1]);
		}
		int k = v.size();
		if(k > s){
			s = k;
			rst.clear();
			for(auto j : v){
				rst.push_back(j);
			}
		}
	}
	
	cout << s << "\n";
	for(auto j : rst){
		cout << j << " ";
	}
	
    return 0;
}
