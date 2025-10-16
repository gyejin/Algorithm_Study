#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	vector<pair<int,int>> v;
	for(int i=0;i<8;i++){
		int k=0;
		cin >> k;
		v.push_back({k,i+1});
	}

	sort(v.begin(),v.end(),greater<>());
	
	vector<int> idx;
	int sum = 0;
	
	for(int i=0;i<5;i++){
		sum += v[i].first;
		idx.push_back(v[i].second);
	}
	
	sort(idx.begin(),idx.end());
	cout << sum << "\n";
	for(auto k : idx) cout << k << " ";
	
    return 0;
}
