#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	set<int> s;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		s.insert(k);
	}
	
	for(auto a : s){
		cout << a << " ";
	}
	
    return 0;
}
